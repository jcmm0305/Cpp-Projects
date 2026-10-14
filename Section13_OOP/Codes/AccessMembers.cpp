#include<iostream>
#include<string>
using namespace std;

class Player
{
    public:
        //Atributtes
        string name;
        int health;
        int xp;
        //Methods
        void talk(string text_to_say){cout<<name<<" says: "<<text_to_say<<endl;}

};

int main(){
    Player Carlos;
    Carlos.name = "Carlos";
    Carlos.health = 100;
    Carlos.xp = 100;
    Carlos.talk("Hello, I am a Faggot!");
    return 0;
}