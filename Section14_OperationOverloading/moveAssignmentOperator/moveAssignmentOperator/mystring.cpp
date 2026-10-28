#include "mystring.h"
#include <cstring>


//No-Args Constructor
Mystring::Mystring(){
    if(str==nullptr){
        str* = new  char[strleng(s)]; //Not done
    }
}
//Overloaded Constructor
Mystring::Mystring(const char *s)
    :str{nullptr}{
        if(s==nullptr){
            s = new char[1];
            *s = '\0';
        }
        else{
            str = new char[std::strlen(s) + 1];
            std::strcpy(str,s);
        }
    }
//Copy Constructor
//Move Constructor
//Destructor
//Copy Assignment Operator
//Move Assignment Operator

Mystring &Mystring::operator=(Mystring &&rhs){//We pass by reference and return by reference (no copying from the heap).

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