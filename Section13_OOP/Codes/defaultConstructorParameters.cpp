#include<iostream>
#include<string>
using namespace std;

class Player{
    private:
        string name;
        int health;
        int xp;
    public:
    //Overload Constructor with default parameters
    Player(string name_val = "None", int health_val = 0, int xp_val = 0);
};

//Initialization list
Player::Player(string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val}{
        cout<<"Three-args constructor"<<endl;

    }
int main(){
    Player empty; //None, 0, 0
    Player frank{"Frank"}; //Frank, 0, 0
    Player Villan{"Villan", 100}; //Villan, 100, 0 
    Player hero{"Hero", 100, 12}; //Hero, 100, 12
    return 0;
}