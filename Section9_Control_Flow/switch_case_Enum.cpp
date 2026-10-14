#include<iostream>
using namespace std;

int main(){
    enum Direction{ //Enumeration type
        left,right,up,down //Enumeration constants
    };
    Direction heading{right};//Heading is my variable of my enumeration
    //Heading could be any of those four

    switch (heading){
        case left:
            cout<<"Going left"<<endl;
            break;
        case right:
            cout<<"Going right"<<endl;
            break;
        default: //Me permite romper el case en caso de que ninguna opcion haga match
        //POr lo tanto, no pasa nada si  no pongo las demas opciones (Up/DOwn).
            cout<<"OK"<<endl;
    }
    cout<<endl;
    return 0;

}