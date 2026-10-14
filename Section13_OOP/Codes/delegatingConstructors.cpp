#include<iostream>
#include<string>
using namespace std;

class Player{
    private:
        string name;
        int health;
        int xp;
    
    public:
        //Overloaded constructor
        Player();
        Player(string name_val);
        Player(string name_val, int health_val, int xp_val);
};

//Class Initialization
Player::Player(string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val}{
        cout<<"Three-args constructor called for: "<<name<<endl; //#1
    }
    
//Class Initialization using delegating constuctors:
Player::Player()
    :Player{"None", 0, 0}{ //#1
        cout<<"No-args constructor called"<<endl; //#2
    }

Player::Player(string name_val)
    :Player{name_val, 0, 0}{
        cout<<"One-arg constructor called for: "<<name<<endl;
    }

int main(){
    Player empty;
    Player frank{"Frank"};
    Player hero{"Hero", 100, 12};
    return 0;
}
/*Cuando creamos el objecto Empty, nuestro compilador llama al constructor sin argumentos:
 * Al llegar a la linea de codigo :Player{"None", 0, 0} es aqui donde se hace la delegacion
 * y mi compilador llama al constructor de tres argumentos, una vez que mis variables se inicializan
 * el compilador se pasa a la siguiente linea donde se imprime "Three-args constructor called for:" 
 * una vez que nos salimos del constructor de tres argumentos, nos regreamos al constructor de cero
 * argumentos y ejecutamos su ultima linea "No-args constructor called"
 * 
 * Cuando utilizas un inicializador, debes de estar consciente que primero se ejecutara el cuerpo del constructor
 * que se llama (al que se delega) y despues se ejecutara el cuerpo del constructor que lo llama*/