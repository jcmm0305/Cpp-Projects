#include "mystring.h"
#include <cstring>
#include <iostream>


//No-Args Constructor
Mystring::Mystring()
    :str{nullptr}{
        str = new  char[1];
        *str = '\0'; 
    }

//Overloaded Constructor
Mystring::Mystring(const char *s)
    :str{nullptr}{
        if(s==nullptr){
            str = new char[1];
            *str = '\0';
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
        str = new char[std::strlen(source.str) +1];
        std::strcpy(str, source.str);
        std::cout<<"Copy Constructor Called"<<std::endl;
    }
//Move Constructor
Mystring::Mystring(Mystring &&source)
    :str{source.str}{
        str = source.str;
        std::cout<<"Move Constructor Called"<<std::endl;
    }
//Destructor
Mystring::~Mystring(){
    if(str == nullptr){
        std::cout<<"Calling Destructor for Mystring: nullptr"<<std::endl;
    }
    else{
        std::cout<<"Calling destructor for Mystring: "<<str<<std::endl;
    }
}
//Copy Assignment Operator
Mystring& Mystring::operator=(const Mystring &rhs){
    std::cout<<"Copy Assignment Called"<<std::endl;
    if(this==&rhs)
        return *this;
    delete[] this->str;
    this->str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);
    return *this;
}
//Move Assignment Operator

Mystring& Mystring::operator=(Mystring &&rhs){//We pass by reference and return by reference (no copying from the heap).
    std::cout<<"Move Assignment Called"<<std::endl;
    if(this == &rhs)   //If you do self assignment (if 'this' (object) is the same that the rhs)
        return *this;  //Return the current object

    delete[] this->str;      //We deallocate the storage of the current object to make space for the object to be copied
    this->str = rhs.str;     //We steal the pointer

    rhs.str = nullptr; //Null out the rhs object

    return *this;   
    /*
        - 'This' is a pointer to the current object
        - *this derefences it, giving you the object itself
    */
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