/*
Shipping cost calculator

Ask the user for package dimension in inches
lenght, witdh, height -these should be integers

All dimension must be 10 inches or lesss or we cannot ship it

Base cost $2.50
If package volume is greater than 100 cubic inches there is a 10% surcharge
If package volume is greater than 500 cubic inches there is a 25% surcharge
*/
#include<iostream>
#include<iomanip> //input and output manipulated

using namespace std;

int l{}, w{}, h{};
int volume{};
const double sur1 {0.10};
const double sur2 {0.25};
const double base {2.50};
double total {};
int main(){
    
    cout<<"Shipping cost calculation"<<endl;
    cout<<"Please, type all dimensions"<<endl;
    cout<<"Lenght: ";cin>>l;
    cout<<"Witdh: ";cin>>w;
    cout<<"Height: ";cin>>h;

    volume = (l*w*h);

    if (l<=10 && w<=10 && h<=10 ){
        
        if(volume>=500){
            double sur {(base)*(sur2)};
            total = sur+base;
        }
        else if(volume>=100){
            double sur {(base)*(sur1)};
            total = sur+base;
         }
        }

    else{
        cout<<"Sorry, we cannot ship this package"<<endl;
    }
    cout<<fixed<<setprecision(2);//Print total with 2 decimals.
    cout<<"\nThe volume of your package is: "<<volume<<endl;
    cout<<"Your total payment is: $"<<total<<endl;
    cout<<endl;
    return 0;
}
