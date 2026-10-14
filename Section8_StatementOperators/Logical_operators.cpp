#include<iostream>
using namespace std;
/*Notes:
Jerarquia de operadores logicos:
Not es mayor que and
and es mayor que or

 Not es un operador unitario
 mientras que and y or area binary
 */
int main(){
    int num{};
    const int lower{10};
    const int upper{20};

    cout<<boolalpha;
    cout<<"Enter an integer - the bounds are 10 and 20: ";
    cin>>num;

    bool within_bounds{false};

    within_bounds = (num>lower && num<upper);
    cout<<num<<" is between "<<lower<<" and "<<upper<<": "<<within_bounds<<endl;
}