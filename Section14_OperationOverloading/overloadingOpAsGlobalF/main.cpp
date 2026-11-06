/*NOTES:

    - How to overload operators using non-member or global functions?
    - Since these are not member functions, we no longer have a 'this' pointer referring to the object on the lhs.
    - We can declare this operators as a friend of our class to have access private attributes.
    - We have an LHS object instead of the 'this' pointer
    - Unary operators -> one object is in the parameter list
    - Binary operators -> two objects are in the parameter list

    Why do we pass parameters by REFERENCE?
        Basically, to void copies. When we pass by reference, we avoid passing by value, therefore, creating unnecessary copies and using heap space
        Mystring operator+(const Mystring &lhs, const Mystring &rhs), with 'const', it ensures the compiler that the functionwont modify the our parameter (Only reading)

        Const let us pass temporaries as well, for example, Mystring stooges = larry + " Moe"; //operator+(larry, Mystring{" Moe"}). Without const, it would not compile.
*/
#include "mystring.h"
#include <iostream>

int main(){

    Mystring larry{"LARRY"};
    Mystring moe{"Moe"};

    Mystring stooge = larry;

    std::cout<<"Is larry equals to moe? "<<(larry==moe)<<std::endl;
    std::cout<<"Is larry equals to stooge? "<<(larry==stooge)<<std::endl;

    larry.display();
    larry = -larry;
    larry.display();

    Mystring stooges = larry + " Moe"; //operator+(larry, Mystring{" Moe"})
    stooges.display();
    //Mystring stooges = "Larry"+ moe; //Compile error

    Mystring two_stooges = moe + " " + "Larry";
    two_stooges.display();

    Mystring three_stooges = moe + " " + larry + " " + "Curly";
    three_stooges.display();

    return 0;
}
