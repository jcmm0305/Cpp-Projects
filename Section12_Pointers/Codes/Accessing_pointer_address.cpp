#include<iostream>
using namespace std;

int main(){
    
    int *pointer_variable; //Declaramos puntero
    int num1 = 20;
    
    //Si queremos saber el valor de un puntero sin haberlo inicializado previamente, obtendremos basura.
    cout<<"Value of pointer_varaible is: "<<pointer_variable<<endl; // garbage (We didnt initialize before)
    cout<<"Address of pointer_variable is:"<<&pointer_variable<<endl; //Consulting Address
    cout<<"Size of pointer_varivble is: "<<sizeof pointer_variable<<endl; //8 since my pointer is an integer
    
    pointer_variable = &num1; //Inicializamos el puntero a nullptr, lo que significa 
                            // que no apunta a ninguna dirección de memoria válida.

    cout<<"Value of pointer_variable is: "<<*pointer_variable<<endl; // 0 since is not pointer at nowhere.
    //Ya no aparece basura, sino que el valor del puntero es 0 (o nullptr), indicando que no 
    // apunta a ninguna dirección de memoria válida.
    cout<<"Address of pointer_variable is:"<<&pointer_variable<<endl; //Address STILL THE SAME
}