#include<iostream>
using namespace std;
int main(){
    int cents {};
    int dollars{};
    int quarters{};
    int dimes {};
    int nickles {};
    int pennies {};
    int balance {};
    cout<<"Enter an amount of cents: ";cin>>cents;
    cout<<"You can provide this change as follows: "<<endl;
    if (cents>0){
       /* dollars = cents/100;
        quarters = (cents%100)/25;
        dimes = ((cents%100)%25)/10;
        nickles = (((cents%100)%25)%10)/5;
        pennies =(((cents%100)%25)%10)-(nickles*5);*/
        //Another Way
        dollars = cents/100;
        balance = cents%100;

        quarters = balance/25;
        balance%=25; //Es como si pusieras balance = balance%25

        dimes = balance/10;
        balance%=10;

        nickles = balance/5;
        balance%=5;

        pennies = balance;

    }
    else{
        dollars = 0;
        quarters =0;
        dimes = 0;
        nickles = 0;
        pennies = 0;
    }
    cout<<"Dollars: "<<dollars<<endl;
    cout<<"Quarters: "<<quarters<<endl;
    cout<<"Dimes: "<<dimes<<endl;
    cout<<"Nickels: "<<nickles<<endl;
    cout<<"Pennies: "<<pennies<<endl;
    return 0;
}