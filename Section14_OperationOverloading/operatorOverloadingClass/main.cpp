/*Notes:

    * With operator overloading, C++ enables you to redefine the way operators work - with user-defined types (classes).
      This allows operators like +,-, or * to be used with objects of clases you crate, ENHANCING the 
      versatility of your code.

      What does operator overloading look like from the perspective of using the objects?
        First, this is how we would write code i we were not using overloading operators.
        We have the Number class: If we wanted to add a and b, then multiply that result by the
        quotient (cociente) of c divided by d. Our code might look like this:
        
        Using Function:
        Number result = multiply(add(a,b),divide(c,d));

        Using Member Methods:
        Number result = (a.add(b)).multiply(c.divide(d));

        Now, this is how our calculations would look like if we overeloaded the addition, multiplication and division operators.
        Number result = (a+b) * (c/d); -> Behind the scenes we're still calling methods or functions.

        We want to use operators with our own classes/objects as we use them with built-in types.

*/
#include <iostream>
#include "mystring.h"

int main(){

    Mystring empty;           //We call no args constructor
    Mystring larry("Larry"); //Overloaded constructor
    Mystring stooge(larry); //copy constructor

    empty.display();
    larry.display();
    stooge.display();

    return 0;

}