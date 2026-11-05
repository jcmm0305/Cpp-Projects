/*NOTES:

    - How to overload operators using non-member or global functions?
    - Since these are not member functions, we no longer have a 'this' pointer referring to the object on the lhs.
    - We can declare this operators as a friend of our class to have access private attributes.
    - We have an LHS object instead of the 'this' pointer

*/
#include "mystring.h"