#include "mystring.h"
#include <cstring>
#include <iostream>

//No args-constructor
Mystring::Mystring()
    :str{nullptr}{
        str = new char[1];
        *str = '\0';
    }
//Overloaded Constructor
Mystring::Mystring(const char *s)
    :str{nullptr}{
        if(s == nullptr){
            str = new char[1];
            *str = '\0';
        }
        else{
            str = new char[std::strlen(s) + 1];
            std::strcpy(str,s);
        }
        //std::cout<<"Overloaded Constructor Called"<<std::endl;
    }

//Copy Constructor:
Mystring::Mystring(const Mystring &source)
    :str{nullptr}{
        str = new char[std::strlen(source.str) + 1];
        std::strcpy(str,source.str);
        //std::cout<<"Copy Constructor Called"<<std::endl;
    }
//Move Constructor
Mystring::Mystring(Mystring &&source)
    :str{source.str}{
       // std::cout<<"Move Constructor Called"<<std::endl;
    }

//Destructor
Mystring::~Mystring(){
    /*if(str == nullptr){
        std::cout<<"Calling Destructor for Mystring: nullptr"<<std::endl;
    }
    else{
        std::cout<<"Calling Destructor for Mystring: "<<str<<std::endl;
    }*/
    delete [] str;
}

//Copy Assign Operator
Mystring& Mystring::operator=(const Mystring &rhs){
    //std::cout<<"Copy Assignment Operator Called"<<std::endl;
    if(this==&rhs)
        return *this;
    delete[] this->str;
    this->str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);
    return *this;
}

//Move Assignment Operator
Mystring& Mystring::operator=(Mystring &&rhs){
    if(this==&rhs)
        return *this;
    delete[] this->str;
    this->str = rhs.str;
    rhs.str = nullptr;
    return *this;
}


//Equality
bool operator==(const Mystring &lhs, const Mystring &rhs){
    //std::cout<<"Equality method called"<<std::endl;
    return(std::strcmp(lhs.str, rhs.str) == 0);
}

//Make lowercase
Mystring operator-(const Mystring &obj){
    //std::cout<<"Make Lowercase method called"<<std::endl;
    char *buff = new char[std::strlen(obj.str) + 1];
    std::strcpy(buff, obj.str);
    for(size_t i=0; i<std::strlen(buff); i++){
        buff[i] = std::tolower(buff[i]);
    }
    Mystring temp{buff};
    delete[] buff;
    return temp;
}
//Concatenation
Mystring operator+(const Mystring &lhs, const Mystring &rhs){
    //std::cout<<"Concatenation method called"<<std::endl;
    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff,lhs.str);
    std::strcat(buff,rhs.str); //Concatenate
    Mystring temp{buff};
    delete[] buff;
    return temp;
}

//Getters
int Mystring::get_length()const{
    return std::strlen(str);
}

void Mystring::display()const{
    std::cout<<str<<": "<<get_length()<<std::endl;
}

const char *Mystring::get_str()const{
    return str;
}
