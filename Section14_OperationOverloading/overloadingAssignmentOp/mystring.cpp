#include "mystring.h"
#include <cstring>
#include <iostream>


//No-Args Constructor
Mystring::Mystring()
    :str{nullptr}{
        str = new char[1];
        *str = '\0';
        std::cout<<"Empty Constructor Called"<<std::endl;
    }


//Overloaded constructor
Mystring::Mystring(const char* s)
    :str{nullptr}{
        //We first check that we are not getting a null pointer
        if(s==nullptr){
            str = new char[1]; //We ask for one space on the heap and we store the address in str
            *str = '\0'; //We dereference and change our value for a null character (empty string)
        }
        else{
            str = new char[std::strlen(s) + 1];
            std::strcpy(str,s);
        }
        std::cout<<"Overloaded Constructor Called"<<std::endl;
    }

//Copy Constructor
Mystring::Mystring(const Mystring &source)
    :str{nullptr}{
        str = new char[std::strlen(source.str) + 1];
        std::strcpy(str,source.str);
        std::cout<<"Copy Constructor Called"<<std::endl;
    }

//Destructor
Mystring::~Mystring(){

    delete[] str; //We free the space we asked in heap once our object goes out of scope.
    std::cout<<"Destructor Called"<<std::endl;
}

/* Overloaded Copy Assignment Operator
    - How we use the overloaded assignment operator step by step:
        1. We check if we are not self assigment 
        2. We free any memory stored in the lhs object that is about be assigned to the rhs object
        3. Now that our object is pointing to "garbage", we copy the rhs object's data over our lhs object

    IMPORTANT TO KNOW:
        - 'this' and 'this->str' are two different pointers
        - rhs represents the whole object, &rhs represents the address of the rhs object
        - 'this' points to the whole object on the stack ('this' holds the address of the lhs object)
        - 'this->str' points to the chars on the heap.

*/
Mystring& Mystring::operator=(const Mystring &rhs){
    std::cout<<"Copy Assignment Called"<<std::endl;
    //this is a pointer to the current object (lhs) and holds an address
    if(this==&rhs){  //If 'this' is the address of the 'rhs' object (the same object)
        return *this;
    }
    delete[] this->str; //or str (Free my old chars)
    this->str = new char[std::strlen(rhs.str) +1]; //Get my new space
    std::strcpy(this->str, rhs.str); //Copy rhs's chars into it
    return *this; //Hand back the OBJECT
}

//Methods
void Mystring::display() const{
    std::cout<<str<<": "<<get_length()<<std::endl;
}

//Getters
int Mystring::get_length() const{
    return std::strlen(str);
}

const char *Mystring::get_str()const{
    return str;
}