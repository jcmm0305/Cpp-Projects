#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player {
    private:
        //variable that applies to the entire class, so each object will share the same variable.
        static int num_players; //We can't initialize it here, we need to do it in the player.cpp file.
        std::string name;
        int health;
        int xp;

    public:
        static int get_num_players();
        //Constructor declaration
        Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
        //Copy constructor declaration
        Player(const Player &source);
        //Destructor declaration
        ~Player();

};

#endif