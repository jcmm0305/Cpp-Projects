/*Notes:

    Friends are a controversial topic in C++ -> The controversy is about encapsulation and data hiding.
    What is a Friend of a class? -> Function or another class that has access to private class members and it's not a member
                                    of the class that it's accessing.

        Friend functions -> Can ve regular non-member functions or member functions of another class. 
                            They are declared inside the class with the keyword friend.
                            Friend functions can access private and protected members of the class.
        
        Fiend Classes    -> Another entire class can have access to private class members.
                            Friend classes are declared inside the class with the keyword friend.
    How C++ treats friendship?  -> Friendship must be granted, not taken. 
                                   Friendship is not mutual(If A is a friend of B, B is NOT a friend of A)., 
                                   Friendship is not inherited (if A is a friend of B AND B is a friend of C, then A is NOT a friend of C).,
                                   Friendship is not transitive.
                                   Friendship must be declared explicitly in the class that is granting friendship.
                                   */
#include <iostream>
#include <string>


class Player{
    //Friend function declaration (protoype)
    friend void display_player(Player &p); //Now the display_player function has access to everything in the player class
    //We can also declare a entire separate class as a friend.
    friend class other_class; //All the methods in the other class will have access to the player classes private attributes.
    std::string name;
    int health;
    int xp;
    public:
        Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
};

void display_player(Player &p){ //Display_player may also change private data members
    std::cout << "Name: " << p.name << std::endl;
    std::cout << "Health: " << p.health << std::endl;
    std::cout << "XP: " << p.xp << std::endl;
}

Player::Player(std::string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val}{}