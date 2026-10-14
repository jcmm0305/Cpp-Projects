#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;
    int *ptr1 = &a;
    int *ptr2 = &b;
    //Aquí lo que estamos haciendo es modificar el valor de la variable a la que apunta cada puntero, no su dirección de memoria.
    //10 = 10 + 20
    *ptr1 = *ptr1 + *ptr2; // a = a + b
    //20 = 30 -20
    *ptr2 = *ptr1 - *ptr2; // b = a - b
    //30 = 30 - 10
    *ptr1 = *ptr1 - *ptr2; // a = a - b

    /*Así es como parece que estamos intercambiando los valores enteros de cada puntro, aunque en realidad estamos modificando los valores a los que apuntan,
    tomando de referencia los valores iniciales a los que apuntan*/

    
    cout << "Value of a: " << *ptr1 << endl;
    cout << "Value of b: " << *ptr2 << endl;

}