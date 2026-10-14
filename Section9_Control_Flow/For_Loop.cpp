#include<iostream>
#include<vector>
using namespace std;

int main(){
    for (int i{1}; i<=10;++i){
        cout<<i<<endl;
    }
    for (int i {1}; i<=10; i+=2)
        cout<<i<<endl;
    for (int i{10};i>0;--i)
        cout<<i<<endl;

    for (int i {10};i<=100;i+=10){
        if(i%15==0)
            cout<<i<<endl;
    }
    for (int i{1},j{5};i<=5;++i,++j)
        cout<<i<<"+"<<j<<"="<<(i+j)<<endl;
    
    /*for(int i{1};i<=100;i++){
        cout<<i;
        if(i%10==0)
            cout<<endl;
        else
            cout<<"";
    }*/
   for(int i{1};i<=100;i++){
        cout<<i;
        cout<<((i%10==0)?"\n":""); 
   }

    vector<int>nums {10,20,30,40,50};
    for(unsigned int i{0};i<nums.size();++i)
        cout<<nums[i]<<endl;

    cout<<endl;
    return 0;
}
/*
Notes:
.size() entrega valore solo postiviso (unsigned)
al indentar "int i" estamos hablando que estamos comparando
o condicionando dos tipos de valores diferentes
int<unsigned int. Es por eso que se recomienda
cambiar a unsigned int<unsigned int
*/