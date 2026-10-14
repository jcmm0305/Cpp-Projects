#include<iostream>
using namespace std;
int num1{3},num2{10};
int main(){
    bool result {false};
    result = (100==50+50);
    cout<<"Result: "<<result<<endl;
    result = (num1!=num2);
    cout<<"Result: "<<result<<endl;

    //Si quisieramos solo imprimir  el valor de una condicion
    cout<<(num1==num2)<<endl;
    cout<<std::boolalpha;//imprime False/true
    cout<<(num1==num2)<<endl;
    cout<<std::noboolalpha;// Imprime 0 o 1
}
//Es importante tener encuenta que si queremos comparar 12==11.99999
//C++ los tomara como iguales ya que trabaja con aproximaciones
//Esto quiere decir que para mayor precision necesita trabajarse
//con librerias y herramientas mas enfocadas