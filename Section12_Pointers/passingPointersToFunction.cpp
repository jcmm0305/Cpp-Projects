#include<iostream>
#include <string>
#include<vector>

using namespace std;

void display(vector<string>*vec_ptr);

void double_data(int *int_ptr);

void display1(int *array, int sentinel);
int main(){
    int parameter = 10;
    cout << "Before doubling: " << parameter << endl;
    /*Dentro del argumento de la función ira la dirección
    de memoria del parametro al cual apuntará el puntero*/
    double_data(&parameter);
    cout << "After doubling: " << parameter << endl;

    cout<<"---------------------"<<endl;
    vector<string> stooges{"Larry", "Moe", "Curly"};
    display(&stooges);

    cout<<"---------------------"<<endl;
    int scores[] {100, 98, 90, 86, 84, -1};
    display1(scores, -1);

    return 0;
}
//Se inicializa el puntero dentro del argumento de la función.
void double_data(int *int_ptr){
    *int_ptr *= 2;
}

void display(vector<string>*vec_ptr){
    for (auto str:*vec_ptr){
        cout<<str<<" ";
    }
    cout<<endl;
}

void display1(int *array, int sentinel){
    while(*array != sentinel){
        cout<<*(array++)<<" "; //We iterate through the array using dereferencing and pointer arithmetic
    }
    cout<<endl;
}
