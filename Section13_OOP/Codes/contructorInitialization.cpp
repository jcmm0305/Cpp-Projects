#include<iostream>
/*Initialization  Lists:
We want to initialize our constructor as it is created.*/

class Player{
    private:
        std::string name;
        int health;
        int xp; 
    public:
        //Constructor declaration
        Player(std::string name_val, int health_val, int xp_val);  
        //Method
        std::string get_name(){return name;} 
};
/* Initialization list is used to initialize the member variables 
of the class. It is more efficient than assigning values inside the constructor body, especially for complex data types.*/
//INITIALIZATION LIST:
Player::Player(std::string name_val, int health_val, int xp_val)
    :name(name_val), health(health_val), xp(xp_val) {
} 
int main(){
    Player player1("John", 100, 50);
    std::cout<<"Player1's name: "<<player1.get_name()<<std::endl;
    return 0;
}