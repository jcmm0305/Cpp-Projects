#include <iostream>
#include <cstring>
#include "mystring.h"

//No-Args Constructor
Mystring::Mystring()
    :str{nullptr}{
        str = new char[1];
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
        str = new char[std::strlen(source.str) + 1];
        std::strcpy(str,source.str);
        std::cout<<"Copy Constructor Called"<<std::endl;
    }

//Move Constructor:
Mystring::Mystring(Mystring &&source)
    :str{source.str}{
        //source.str = nullptr;
        //delete[] source.str;
        std::cout<<"Move Constructor Called"<<std::endl;
    }

//Destructor
Mystring::~Mystring(){
    if(str==nullptr){
        std::cout<<"Destructor Called for Mystring: nullptr"<<std::endl;
    }
    else{
        std::cout<<"Destructor called for "<<str<<"  "<<*str<<std::endl; //*str returns the first character of the char array
    }                                                                    //cout walks through the char array of str, thats why we get the whole chars.
}

//Copy Assignment
/*
    this      = [Mystring*], 'this' contains the address of lhs object
    *this     = [Mystring], lhs object itself "Go to the address and get what it's stored"
    rhs       = [const Mystring&], it is the object that we are trying to copy itself, under ANOTHER name.
    &rhs      = [const Mystring*], it is the address of the object that we are trying to copy
    this->str = [char*], the address were lhs's chars live (on the heap)
    rhs.str   = [char*], the address were rhs's chars live (on the heap)

    Mystring&            ---> This function gives back a reference to a Mystring, an existing object, not copy.
    const Mystring &rhs  ---> The parameter rhs is another name for the object on the right. Don't copy it, and I promise not to modify it
*/
Mystring& Mystring::operator=(const Mystring &rhs){
    std::cout<<"Copy Assignment Called"<<std::endl;
    if(this==&rhs)//We check that the address of our lhs object isn't the same as the address of the rhs object
        return *this;
    delete[] this->str;
    this->str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(this->str,rhs.str);
    return *this;
}

//Move Assignment
Mystring &Mystring::operator=(Mystring &&rhs){
    std::cout<<"Move Assignment Called"<<std::endl;
    if(this==&rhs)
        return *this;
    delete[] this->str; //We free the space store in the current str 
    this->str = rhs.str; //We point to the same chars str as rhs 
    rhs.str = nullptr; //we make rhs to point a null pointer so once it gets destructed, it wont take the str with it.
    return *this;
}

//Lowercase Method
Mystring Mystring::operator-()const{
    char* buffer = new char[std::strlen(this->str) + 1]; //This is a brand new pointer to an area on the heap just allocated (It's local to the function)
    std::strcpy(buffer,this->str);
    for(size_t i = 0; i<strlen(buffer); i++){
        buffer[i] = std::tolower(buffer[i]);
    }
    Mystring temp{buffer}; //We create a new brand object
    delete[] buffer;
    return temp;
}

//Concatenate Method
Mystring Mystring::operator+(const Mystring &rhs)const{
    char *buffer = new char[std::strlen(this->str) +std::strlen(rhs.str)+1];
    std::strcpy(buffer,this->str);
    std::strcat(buffer,rhs.str);
    
    Mystring temp{buffer};
    delete[] buffer;
    return temp;
}

//Equality Method
bool Mystring::operator==(const Mystring &rhs)const{
    return(std::strcmp(this->str, rhs.str)==0);
}

int Mystring::get_length()const{
    return std::strlen(str);
}

void Mystring::display()const{
    std::cout<<str<<": "<<get_length()<<std::endl;
}

const char *Mystring::get_str()const{
    return str;
}

