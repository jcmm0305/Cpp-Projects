#include <iostream>
#include <string>
#include "player.h"
/*NOTES:
*   In a C++ class we can have both, a static data and function members
*       - When we declare data as static -> "The data belongs to the class, not to any specific object."
*       - It's useful to create class-wide information
        Scenario:
            - Suppose you wanna know how many objects are instantiated in our application at any point at time
            -a) We could create a global variable and then increment it and decrement it int the code (HARD WAY)
            -b) BETTER SOLUTION: To create a STATIC variable that's part of our class and then we can
                maniupulate that variable directly wihtin that class.
                Whenever we need to know how many object there are, we can simply ask our class (We don't need any objects)

    
    Where would you lacate the static data member (num_players)?
        To increment it automatically, everytime an object is created, we can increment it in the constructor of the class
        The constructor definition is made in the player.cpp file.
        - We can´t add it to objects beacuase then each object would have their own copy.
*/

void display_active_players(){
    std::cout<< "Active players: "
             << Player::get_num_players() << std::endl;
}

int main(){

    display_active_players();

    Player Carlos {"Carlos", 100, 12};
    
    Player Nacho {"Nacho", 100, 15};
    display_active_players();
    //Local scope of the object, when it goes out of scope, the destructor is called and the static variable is decremented.
    {
        Player Juan {"Juan", 100, 20};
        display_active_players();
    }
    //When it goes out of scope, the destructor is called and the static variable is decremented.
    display_active_players();

    /*This object is created in the heap, so it will not be destroyed when it goes out of scope, we need to delete it manually.*/
    Player *enemy = new Player {"Enemy", 100, 25}; 
    display_active_players();
    delete enemy;
    display_active_players();
    return 0;

}
