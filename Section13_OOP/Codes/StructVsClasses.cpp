/*Notes:
Struct or structure -> is another way to create objects in C++ 
                       You can treat structs like classes, but all members are public by default 
                       Use structs when you want to group data together and don't need encapsulation or private members.
                       Don't declare methods in structs
                       
Class               -> is a blueprint for creating objects and its members are private by default

class Person {
std::string name;
std::string get_name();
};

Person p;
p.name = "John"; // This will give an error because name is private (compiler error - private member)
std::cout << p.get_name(); // This will give an error because this method is private (compiler error - private member)
*/
#include <iostream>
#include <string>

struct Person { //The default acces for struct is public
    std::string name;
    std::string get_name(){return name;}
};

int main(){
Person p;
p.name = "Frank";
std::cout<<p.get_name();

return 0;
}