#include<iostream>
#include<string>
/*
Notes:
* Copy constructor:
* C++ can create a new object from an existing object of the same class 
* 
*When is it used?
* If we pass an object by value to a function as a parameter, the copy constructor is called to create a copy of the object.
* Returning an object from a function by value also invokes the copy constructor to create a copy of the object being returned.
* Constructing one object based on another of the same class.
*
* If we don't provide a copy constructor, the compiler will generate a default copy constructor for us.
* Example:
* Pass object by value:
* Player hero {"Hero", 100, 20};
* void display_player(Player p){  //p is a COPY of hero in this example
*   //Destructr for p will be called for p when it goes out of scope.
* } 
*display_player(hero); //Copy constructor is called to create a copy of hero and pass it to the function.
*
* BEST PRACTICES:
* Provide a copy constructor when your class has raw pointer members
* Provide the copy constructor with a const reference parameter to avoid unnecesary copies of the object being passed.
* Use STL classes as they already provide copy constructors.
* Avoid using raw pointer data members if possible, use smart pointers instead.
*/
class Player{
    private:
        std::string name;
        int health;
        int xp; 
    public:
        //Default constructor declaration
        Player(std::string name_val="None", int health_val = 0, int xp_val= 0);  
        
        //Copy constructor declaration
        Player(const Player &source);
        
        //Method
        std::string get_name(){return name;}
        int get_health(){return health;}
        int get_xp(){return xp;}

        //Destructor
        ~Player(){std::cout<<"Destructor called for: "<<name<<std::endl;}
};

//Constructor List Definition
Player::Player(std::string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val}{
        std::cout<<"Three-args constructor for: " + name<<std::endl;
    }

//Copy constructor definition
Player::Player(const Player &source)
    :name{source.name}, health{source.health}, xp{source.xp}{
        std::cout<<"Copy Constructor - made copy of: "<<source.name<<std::endl;
    }

//As we are gonna an object by value.
void display_player(Player p){
    std::cout<<"Name: "<<p.get_name()<<std::endl;
    std::cout<<"Health: "<<p.get_health()<<std::endl;
    std::cout<<"XP: "<<p.get_xp()<<std::endl;
}
/*If you only want to display the player information without making a copy of the object, 
you can pass the object by reference instead of by value. This way, you avoid invoking the copy constructor 
and can work directly with the original object. Here's how you can modify the `display_player` function 
to take a reference: 
    void display_player(const Player &p){
        std::cout<<"Name: "<<p.get_name()<<std::endl;
        std::cout<<"Health: "<<p.get_health()<<std::endl;
        std::cout<<"XP: "<<p.get_xp()<<std::endl;
    }
Making this change, your getters now have to be declared as const: 

    std::string &get_name() const{return name;} //std::string &get_name() avoids copying the string when returning it.
    int get_health() const{return health;}// 'const' here indicates that the method does not modify the object.
    int get_xp() const{return xp;}



*/


int main(){
    //Creating a new object from our Player class
    Player super_enemy{"Super Enemy", 1000, 1000};
    display_player(super_enemy); //Copy constructor is called to create a copy of super_enemy and pass it to the function.

    //Creating a new object based on an existing object of the same class.
    Player my_new_enemy{super_enemy}; //Copy constructor is called to create a copy of super_enemy and assign it to my_new_enemy.
}