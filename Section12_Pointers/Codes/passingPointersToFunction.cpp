#include<iostream>
using namespace std;

void double_data(int *int_ptr);
int main(){
    int parameter = 10;
    cout << "Before doubling: " << parameter << endl;
    double_data(&parameter);
    cout << "After doubling: " << parameter << endl;
    return 0;
}
void double_data(int *int_ptr){
    *int_ptr *= 2;
}