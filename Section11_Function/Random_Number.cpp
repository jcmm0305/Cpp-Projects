#include<iostream>
#include<cstdlib> //Required for rand() - Random numeros
#include<ctime>   //Required for time()
using namespace std;
int main(){
    int random_number {};
    size_t count {10}; //Number of random numbers to generate
    int min {1}; //Lower bound (inclusive)
    int max {6}; //Upper bound (inclusive)

    //Send the random number generator
    //If you dont seed the generator you wil get the same 
    //requence random number every run

    cout<<"Rand_MAX on my system is: "<<RAND_MAX<<endl;
    srand(time(nullptr));

    for(size_t i{1};i<=count;++i){
        random_number = rand()%max+min;//Generate a random number [min, max]
        cout<<random_number<<endl;
    }
    cout<<endl;
    return 0;

}