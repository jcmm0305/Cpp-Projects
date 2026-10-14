#include<iostream>
#include<string>
#include<vector>
using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string>vecs); //Espera un vector de string objects
void print_vector(vector<string>vecs); //Imprime el estring dentro del vector

void pass_by_value1(int num){
    num = 1000; 
    /*Modificamos el valor 
    de num dentro de la función, pero esto no afectará al valor 
    original de num en el main, ya que se pasa por valor, no por referencia. 
    Es decir, solo se pasa una copia del valor.*/
}

void pass_by_value2(string s){
    s = "changed";
}
void pass_by_value3(vector<string>v){
    v.clear(); //Delete all vector elements
}

void print_vector(vector<string>v){
    for(auto s:v)
        cout<<s<<" ";
    cout<<endl;
}

int main (){
    int num{10};
    int another_num{20};
    cout<<"num before calling pass_by_value1: "<<num<<endl;
    pass_by_value1(num);
    cout<<"num after calling pass_by_value1: "<<num<<endl;

    string name {"Frank"};
    cout<<"name before calling pass_by_value2: "<<name<<endl;
    pass_by_value2(name);
    cout<<"name after calling pass_by_value2: "<<name<<endl;

    vector<string> names{"Larry","Moe","Curly"};
    cout<<"names before calling pass_by_value3: ";
    print_vector(names);
    pass_by_value3(names);
    cout<<"names after calling pass_by_value3: ";
    print_vector(names);

    cout<<endl;
    return 0;
}