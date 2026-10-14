#include<iostream>
using namespace std;

int main(){
    int num {};
    cout<<"Enter an integer: ";
    cin>>num;

    cout<<num<<" is "<<((num%2==0)?"even":"odd")<<endl;
    cout<<endl;
    return 0;
    /*
    Explicacion:
    el operador condicional ? nos ayuda a escribir lo que seria 
    un if statement en una sola linea
    Escibimos la condicion (condition) seguido de ?
    En este caso, lo que queremos decir es:
    Si la condicion es verdades, se ejecuta lo que esta a un lado
    de ?. Sino es verdadera, se ejecuta lo que esta a un lado de :
    */

}