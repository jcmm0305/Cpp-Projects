#include<iostream>
using namespace std;
int main(){
    int *pointer {nullptr};

    pointer = new int; //EL nuevo int sera almacenado en el heap y su direccion en el pointer

    cout<<pointer; //imprime direccion
    cout<<*pointer;//Imprime el valor de la variable dinamica guardada en heap que ente caso al no ser 
                   //inicializada, es garbage.
    
    delete pointer; //Free storage
    
    size_t size{0};
    double *temp_ptr{nullptr};

    cout<<"How many temperature?: ";
    cin>>size;

    temp_ptr = new double[size]; //Aqui vamos a decir cuantos doubles queremos utilizar, 10?, 100?,  más? en mi array []
    cout<<temp_ptr<<endl;//Nos mostrara la direccion de el area reservada en heap
    delete [] temp_ptr; //ponemos square brakets porque estamos trabajando con un array





}                  
