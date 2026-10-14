#include<string>
#include<iostream>
/*
NOTES:

    So far, we've learned: 
    1) Create const variables which can't be modified 
    2) How pass references and pointers into functions as CONST, and they can't be modify while in the function

    How to create const objects and see what happens when we pass constant objects to methods that don't expect the CONST.

        - const Player villain {"Villain", 100, 55}; //Here with const we can't change any of it's attributes

        - villain.set_name("Nice guy"); // Error
        - std::cout<<villain.get_name()<<std::endl; //Error-It also gets error becuase the compiler assumes that the get name
                                                    //function could potentially change the object.

        SOLUTION?
            We need to tell the compiler that specific methods will not modify the object

*/

class Player{
    private:
        std::string name;
        int health;
        int xp;

    public:
        //FIX (1): I guarantee that I'm not changing that object in this method
        std::string get_name() const{return name;}
        //std::string get_name(){return name;}
        void set_name(std::string name_val){name = name_val;}

        //Overloaded Constructors:
        Player();
        Player(std::string name_val);
        Player(std::string name_val, int health_val, int xp_val);

};

//Delegation-Using class initialization 
Player::Player()
    :Player{"None",0,0}{

    }

Player::Player(std::string name_val)
    :Player{name_val,0,0}{

    }
//Class Initialization
Player::Player(std::string name_val, int health_val, int xp_val)
    :name(name_val), health(health_val), xp(xp_val){

    }

//Function to get the name attribute of the object even when this object is const
void display_player_name( const Player &p){ //Expects p which is a reference to a const player object
    std::cout<<p.get_name()<<std::endl;
}

int main(){

    const Player villain {"Villain", 100, 55};

          Player hero    {"Hero", 100, 5};

    //display_player_name(hero); would also give me an error since p.get_name expect a const and hero is not
    //With fix, adding const to the get_name method, we can now pass hero to display_player_name function
    std::cout<<villain.get_name()<<std::endl;
    std::cout<<hero.get_name()<<std::endl;

    display_player_name(villain);
    display_player_name(hero);
    return 0;
}
