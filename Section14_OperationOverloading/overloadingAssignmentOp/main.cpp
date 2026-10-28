/* NOTES:

    - How to overload the copy assignment operator in C++.
      It is used by C++ when you assign one object to another object.

      NOT Assignment:
        - Mystring s1{"Frank"};
        - Mystring s2 = s1; //Initialization, because s2 hasn't been created yet

      Assignment:
        - s2 = s1 // It is assignment since s2 has already been created and initialized previous to the statement

    - C++ provides a default way of assigning one object to another.
        * Default is memberwise assignment (shallow copy).
            * if we have a raw pointer data member we must DEEP COPY
    
    - The assigment operator must be overloaded as a MEMBER fuction
        * Type &Type::operator=(const Type &rhs);
            * Type: name of our class
            * operator: Name of the method (keyword)
            * =: the operator we want to overload
        
    The object on the left side of the assignment operator is the object that is being assigned to. It is referred to by the 'this' pointer
    The object on the right side of the assignment operator is the object that is being assigned from, Right-hand side (rhs).

    We must make a DEEP copy of the rhs object's attributes and copy them over the lhs object  
    What does this mean semantically?
        1.- The Left-hand side (lhs) object or 'this' object will be overwritten
        2.- So first, we need to de-allocate anything it is refereing to on the heap
        3.- Then, we have to allocate space in the lhs object for the rhs object's DATA
        4.- Finally we copy the data over the lhs object from the rhs object.
    
*/

#include "mystring.h"
#include <iostream>
#include <vector>
int main(){

    Mystring a{"Hello"};
    Mystring b;

    b = a;
    b = "This is a test"; //A temporary object is created for "This is a test" and then assigned to object b.

    
    Mystring empty;
    Mystring larry{"Larry"};
    Mystring stooge{larry};
    Mystring stooges;

    empty = stooge;

    empty.display();
    larry.display();
    stooge.display();

    stooges = "Larry, Moe and Curly";
    stooges.display();

    std::vector<Mystring> stooges_vec;
    stooges_vec.push_back("Larry");
    stooges_vec.push_back("Moe");
    stooges_vec.push_back("Curly");
    
    std::cout<<"========= Loop 1 ================"<<std::endl;
    for(const auto &s:stooges_vec) //With &, we save the copy of a brand-new Mystring object.
        s.display();

    std::cout<<"========= Loop 2 ================"<<std::endl;
    for(auto &s:stooges_vec) 
        s = "Changed";

    std::cout<<"========= Loop 3 ================"<<std::endl;
    for(const auto &s:stooges_vec)
        s.display();
    
    return 0;
}