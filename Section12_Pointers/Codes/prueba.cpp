#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;
    int *ptr1 = &a;
    int *ptr2 = &b;
    //How to swap the values of a and b using pointers without using a temporary variable
    *ptr1 = *ptr1 + *ptr2; // a = a + b
    *ptr2 = *ptr1 - *ptr2; // b = a - b
    *ptr1 = *ptr1 - *ptr2; // a = a - b

    
    cout << "Value of a: " << *ptr1 << endl;
    cout << "Value of b: " << *ptr2 << endl;

}