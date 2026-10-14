#include<iostream>
using namespace std;

unsigned long long factorial(unsigned long long n){
    if(n==0)
        return 1; //base case
    return n * factorial(n-1);
}
unsigned long long fibonacci(unsigned long long n){
    if (n<=1)
        return n; //bases cases
    return fibonacci(n-1) + fibonacci(n-2); //Recursion 
}
int main(){
    cout<<factorial(8)<<endl; // 8x7x6x5x4x3x2 = 40320
    cout<<fibonacci(30)<<endl; //832040
    return 0;
    
}