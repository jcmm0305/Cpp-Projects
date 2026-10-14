#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> values{1,2,-1,3,-1,-99,7,8,10};
    for (auto val:values){
        if (val == -99)
            break; // Termina por completo con el bucle For
        else if (val == -1)
            continue; //Termina con la interacion, sin pasar a los que sigue despues de esa condicion 
        else          // y pide que se pase a la siguiente iteracion desde el principio
            cout<<val<<endl;
    }
}