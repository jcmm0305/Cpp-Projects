#include<iostream>
using namespace std;

int main(){
    int total{};
    int num1{},num2{},num3{};
    const int count{3};
    
    cout<<"Enter 3 integres separated by spaces: ";
    cin>>num1>>num2>>num3;

    total = num1+num2+num3;

    double average {0.0};

    //average = total/count;
    //apesar de que average es una variable de tipo double
    //la dividion de total/count es entre enteros por lo que
    // el resultado me lo da en entero, sin tomar en cuenta decimales
    // y perdiendo informacion.
    
    average = static_cast<double>(total)/count;
    cout<<"The 3 numbers were: "<<num1<<", "<<num2<<", "<<num3<<endl;
    cout<<"The sum of the numbers is: "<<total<<endl;
    cout<<"The average of the number is: "<<average<<endl;

    cout<<endl;
}