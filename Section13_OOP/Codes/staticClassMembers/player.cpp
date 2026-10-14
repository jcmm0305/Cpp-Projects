#include "player.h"

//Static variable initialization, we don't have to declare 'static' again.
int Player::num_players = 0;

int Player::get_num_players(){
    return num_players;
}

//Constructor definition
Player::Player(std::string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val}{
        num_players++;
    }

//Copy constructor definition
Player::Player(const Player &source)
    :Player{source.name, source.health, source.xp}{
        //num_players++; //We don't need to increment it here because we are calling the constructor above.
    }

//Destructor definition
Player::~Player(){
    --num_players;
}


