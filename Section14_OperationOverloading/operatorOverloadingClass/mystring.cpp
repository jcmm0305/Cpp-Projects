#include <cstring>
#include <iostream>

#include "mystring.h"

//No-args constructor defined
/* With this constructor we're telling to C++: an object created with no arguments must still hold a real, valid string
   Specifically, the empty string (""), so the object SHOULDN'T hold "Nothing at all (null pointer)"

*/
Mystring::Mystring() 
    :str{nullptr}{// We first initialize our pointer as a null pointer (so it won't hold garbage)
        std::cout<<"Empty string"<<std::endl;
        // 'new' asks the heap for space for 1 char and hands back its address
        // The address is stored in str, replacing the nullptr. 
        str = new char[1];
        *str = '\0'; //We dereference, going to tha address and store a null terminator ('\0'), known as an empty string.
    }

//Overloaded constructor
//Receives the address of the first element of our char array ("Frank") C-string

/* Say Mystring a{"Frank"};
    Line 1: str = new char[std::strlen(s) + 1];
    std::strlen(s) starts at s and walks forward, counting chars until it hits '\0'. 
    It counts F, r, a, n, k, so it returns 5. It does not count the '\0'. + 1 makes room for the '\0' → 6.
    new char[6] reserves 6 chars on the heap and returns the address of the first one. Say it’s 0x7A20.
    str = ... makes str hold 0x7A20. The 6 slots are still garbage.
*/
Mystring::Mystring(const char *s) //s stores only the address of our first element
    :str{nullptr}{
        if(s==nullptr){ //"Was I given not address at all, then we make it point to an empty string"
            str = new char[1];
            *str = '\0';
        }
        else{
            //We ask the heap for space for the lenght of our string, here we only have reserved the space not the string yet
            str = new char[std::strlen(s)+1]; 
            //Here we pass our string stored in s to our private member str, so now str holds our string
            //The thing here is that, below now we have two separate strings with the same content, but they are stored in DIFFERENT memory locations.
            //That way we don't mess with s and get our own copy of it
            std::strcpy(str, s);
            //We'll have to free the memory we allocated in the heap when we are done with our object, so we will have to implement a destructor.
        }
        std::cout<<"Using our Overloaded Constructor"<<std::endl;
    }

Mystring::Mystring(const Mystring &source )
    :str{nullptr}{
        std::cout<<"Using our Copy Constructor"<<std::endl; 
        str = new char[std::strlen(source.str)+1]; //Deep copy, I dont want to share 
        std::strcpy(str, source.str);
    }

Mystring::~Mystring(){
    std::cout<<"The destructor has been called"<<std::endl;
    delete[] str; //We free the space we asked in heap once our object goes out of scope.
}

//Display method:
void Mystring::display() const{
    std::cout<<str<<": "<<get_length()<<std::endl;
}

//length getter
int Mystring::get_length() const{return std::strlen(str);}

//string getter
const char *Mystring::get_str() const{return str;}


