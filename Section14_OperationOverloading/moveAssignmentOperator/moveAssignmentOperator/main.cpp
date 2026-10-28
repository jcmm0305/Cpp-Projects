/*Notes:

    - The Copy Assignment Operator works with l-values
    - The Move Assignment OPerator works with r-values references (Think about temporary unnamed objects)
        - We don't have to provide a move assignment operator, If you don't, C== will use the copy constructor by default
        - Move semantics can be much more efficient (Move Constructor and Move Assignment Operator).

    - Move semantics allow you transfer ownership instead of duplicating the resource(heap memory, file handles, sockets).
        Copying is expensive
        With Copy Assignment (a = b), a must allocate new memory and copy every element of the object b
            BEFORE: a ------->[1][2][3]              b ------->[7][8][9][10][11]

            COPY (a = b):
                    a ------->[7][8][9][10][11]      b------->[7][8][9][10][11]
                              *New allocation = N element copies
                              It's fine when you need two independent copies, but wasteful when b is a temporary that's about to destroy anyway
        
        The solution: steal, don't copy (MOVE)
        With a Move Assignment, a just takes b's pointer and leaves b empty 
            BEFORE: a ------->[1][2][3]              b ------->[7][8][9][10][11]
            MOVE (a = std::move(b)):
                      1. a fress its old memory [1][2][3] x
                      2. a takes b's pointer
                      3. b is set to nullptr
            
            AFTER:    a ------->[7][8][9][10][11]   b -------> nullptr
     
    Mystring s1; //Mystring object, s1 Empty string

    Now we assign the mystring object with the string Frank to it
    notice that the Mystring object initialized to Frank must be constrctucted
    and once it's constructed, it has No name. It's a TEMPORARY object (r-value).
    That means that when we assign it to S1, the move assignment operator will be called 
    since we're providing an r-value reference.

    s1 = Mystring{"Frank"}; 

*/
#include <iostream>
#include <vector>
#include "mystring.h"

int name(){

    Mystring a{"Hello"};    //Overloaded Constructor
    a = Mystring{"Hola"};  //Overloaded Constructor then Move Assignment
    a = "Bonjour";         //Overloaded Constructor then Move Assignment
}