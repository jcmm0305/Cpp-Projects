#include<iostream>
using namespace std;
int main(){
    int counter{10};
    int result{0};
    cout<<"Counter: "<<counter<<endl;
    result = ++counter; //Aquí har un preincremento de counter
    //La linea 7 quiere decir nos que antes de que se guarde counter
    //en la vaaraiable result, se incrementara el valor de counter
    // por una unidad y luego se guardara en result.
    cout<<"Counter: "<<counter<<endl;
    cout<<"Result: "<<result<<endl;
    //Tanto counter como Result tienen el mismo valor
    
    //Ahora sin preincremento
    cout<<"----------------------"<<endl;
    int counter2{10};
    int result2{0};
    cout<<"Counter: "<<counter2<<endl;
    result2 = counter2++;
    cout<<"Counter: "<<counter2<<endl;
    cout<<"Result: "<<result2<<endl;
    //En este caso, primero se almacena el valor de counter2 en result2 y despues se incrementa por una unidad.
    return 0;
}