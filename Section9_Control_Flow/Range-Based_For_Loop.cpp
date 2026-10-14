#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main(){
    int scores [] {100,90,97};
    for(int score : scores)
        cout<<score<<endl; 
    cout<<endl;
    for(auto score:scores)
        cout<<score<<endl;
    
    //Example 2:
    vector<double> temps {87.2,77.1,80.0,72.5};
    double average_temp {};
    double running_sum {};

    for (auto temp: temps)
        running_sum+=temp;

    average_temp = running_sum/temps.size();
    cout<<fixed<<setprecision(1);
    cout<<average_temp<<endl;
    return 0;

}
/*Notas
El auto sirve para no especificar el 
tipo de variable, en este caso el compilador
de C++ averigua por si solo el tipo de variable*/