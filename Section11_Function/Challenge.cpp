#include<iostream>
#include<vector>
using namespace std;

/*Es importante mencionar que al apuntar a la dirección de memoria del vector, se está pasando una 
referencia al vector en lugar de una copia. Esto permite modificar el vector original desde dentro 
de las funciones.
Es por eso que se utiliza el operador & en la declaración de los parámetros de las funciones, indicando 
que se está pasando una referencia al vector. De esta manera, cualquier cambio realizado en el vector 
dentro de las funciones afectará al vector original declarado en el ámbito global.*/

vector<int>vec = {}; //Declaramos un vector global para almacenar los números ingresados por el usuario.
char ch {};
//Function prototypes!!
void print_numbers(vector<int>&vecx);
void add_number(vector<int>&vecx);
void mean(vector<int>&vecx);
void smallest(vector<int>&vecx);
void largest(vector<int>&vecx);
void deletee(vector<int>&vecx);

int main(){
    cout<<"---------------------Menu------------------------"<<endl;
    while(ch!='Q' && ch!='q'){
        cout<<"\nP - Print numbers"<<endl;
        cout<<"A - Add number"<<endl;
        cout<<"M - Display mean of the numbers"<<endl;
        cout<<"S - Display the smallest number"<<endl;
        cout<<"L - Display the largest number"<<endl;
        cout<<"D - Delete your list"<<endl;
        cout<<"Q - Quit";
        cout<<endl;
        cout<<"\nEnter your choice: ";cin>>ch; //Entrada del usuario

        switch(ch){
            case 'p':
            case 'P':
                print_numbers(vec);
                break;
            case 'a':
            case 'A':
                add_number(vec);
                break;
            case 'm':
            case 'M':
                mean(vec);
                break;
            case 's':
            case 'S':
                smallest(vec);
                break;
            case 'l':
            case 'L':
                largest(vec);
                break;
            case 'd':
            case 'D':
                deletee(vec);
                break;
            case 'q':
            case 'Q':
                cout<<"Good Bye!"<<endl;
                break;
            default:
                cout<<"Type a correct option"<<endl;
        }
}
    return 0;
}
void print_numbers(vector<int>&vecx){
    if(vecx.size()!=0)    
        for(size_t i{0};i<vecx.size();++i)
            cout<<vecx[i]<<", ";
    else
        cout<<"[] - the list is empty"<<endl;
}

void add_number(vector<int>&vecx){
    int num{};
    cout<<"Enter an integer to add to the list: ";cin>>num;
    vec.push_back(num);
    cout<<num<<" added"<<endl;
}
void mean(vector<int>&vecx){
    int sum {0};
    if(vecx.size()!=0){
        for(auto n:vecx)
            sum+=n;
        cout<<"The mean is: "<<static_cast<double>(sum)/vec.size()<<endl; // Permite realizar conversiones explicitas
    }                                                                      // de tipos de datos
    else
        cout<<"There are not enough number to calculate the mean"<<endl;
}
void smallest(vector<int>&vecx){
    if(!vecx.empty()){
        int smallest = vecx.at(0);
        for(auto num:vecx)
            if(num<smallest)
                smallest = num;
            else   
                continue;
        cout<<"The smallest number is: "<<smallest<<endl;
    }
    else
        cout<<"This list is empty"<<endl;;
}
void largest(vector<int>&vec){
    if(!vec.empty()){
        int largest = vec.at(0);
        for(auto num:vec)
            if(num>largest)
                largest = num;
            else   
                continue;
        cout<<"The largest number is: "<<largest<<endl;
    }
    else
        cout<<"This list is empty"<<endl;
}

void deletee(vector<int>&vec){
    vec.clear();
}



 