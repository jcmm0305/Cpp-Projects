#include<iostream>
using namespace std;
int main(){
    int scores [] {100, 95, 89};

    cout<<scores<<endl; // address of the first array element
    cout<<*scores<<endl;// 100, value of the first integer of the array

    int *score_ptr {scores}; //We creat a pointer that points to the first element of the array

    cout<<score_ptr<<endl; //Pointer address that at the same time is the array's address
    cout<<*score_ptr<<endl;//The pointer points to the first element of the array

    //We can also use a pointer like an array

    cout<<score_ptr[0]<<endl;
    cout<<score_ptr[1]<<endl;
    cout<<score_ptr[2]<<endl;

    cout<<(score_ptr+1)<<endl;
    cout<<(score_ptr+2)<<endl;

    cout<<*(score_ptr + 1)<<endl;
    cout<<*(score_ptr + 2)<<endl;
}