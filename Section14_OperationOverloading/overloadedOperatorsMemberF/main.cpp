/*Notes:

    * C++ allows us to overload operators as member methods or global non-member functions
    * Unary operators as member methods (++,--,-,!)
        * Unary operators work on one operand
        * Used them if we wanted to work with our hypothetical number class. 
        * They take NO parameters
        * Examples of applications:
            - To make a string lowercase [operator- ()]
    * Binary operatos as member methods
        * They take ONE parameter (rhs)
        * They work on two operands
        * Addition, substraction, division, multiplication, equality operators and many more. 
            *They can return a newly created sum or difference objects by value, we want to create a new object and return it
        * 
    
    * It is important to know that the C-string functions and cout are desinged to receive the address of the first char and wak forward until they find '\0'


*/
#include "mystring.h"
#include <iostream>

int main(){

    //std::cout<<boolalpha<<std::endl;

    Mystring larry{"LARRY"};
    Mystring moe{"Moe"};

    Mystring stooge = larry;

    std::cout<<"Is larry equals to moe? "<<(larry==moe)<<std::endl;
    std::cout<<"Is larry equals to stooge? "<<(larry==stooge)<<std::endl;

    larry.display();
    Mystring larryLow = -larry;
    larryLow.display();

    Mystring stooges = larry + "Moe";
    //Mystring stooges = "Larry"+ moe; //Compile error

    Mystring two_stooges = moe + " " = "Larry";
    two_stooges.display();

    Mystring three_stooges = moe + " " + larry + " " + "Curly";
    three_stooges.display();

    return 0;
}