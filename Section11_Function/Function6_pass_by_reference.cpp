#include<iostream>
#include<vector>
using namespace std;

void swamp(int &a, int &b);
void print(vector<int> &v);


int main(){
    int x{10}, y{20};
    cout<<x<<" "<<y<<endl;
    swamp(x,y);
    cout<<x<<" "<<y<<endl;

    cout<<"----------------------------------"<<endl;
    vector<int> data {1,2,3,4,5};
    print(data);
    return 0;

}
void swamp(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void print(const vector<int> &v){ //Me asegura que no se modificara ningun dato dentro del vector
    for(auto num:v)               //Ya que estamos utilizando & para ingresar al address del vector
        cout<<num<<endl;          // Y por lo tanto a la posibilidad de cambiar sus valores.
}