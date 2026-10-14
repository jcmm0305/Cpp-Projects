#include<iostream>
using namespace std;

void static_local_example(){
    static int num{5000}; 
    cout<<"local static num is: "<<num<<" in static_local_example - start"<<endl;
    num+=1000;
    cout<<"local static num is: "<<num<<" in static_local_example - start"<<endl;
    /* Static da la propiedad a la variable de mantenr su valor actualizado entre llamadas de funcion, es decir,
    en igual de que se inicialice a 5000 cada vez que se llame a la funcion, este mantendra su valor anterior
    a la llamda hecha posteriormente*/
}                         

int main(){
    int num{100};

    cout<<"Local num is: "<<num<<" in main"<<endl;

    {//Creates a new level of scope
        int num1{200}; //Local of this inner block 
    }
    static_local_example();
    static_local_example();   
}