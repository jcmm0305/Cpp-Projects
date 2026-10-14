#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int score {100}; //Variable
    int *score_pointer {&score}; //Puntero que apunta en la direccion donde se encuentra almacenada la variable score
    
    cout<<*score_pointer<<endl;//Utilizamos el "*" tanto para inicializar un puntero como para acceder a la 
                               //informacion que apunta el mismo.
    *score_pointer=200;//Accedemos nuevamente a la direccion guardad de la variable y modificamos su valor
    cout<<*score_pointer<<endl;//Imprimimos el valor al que apunta el punter (EL valor de la variable Score)
    cout<<score<<endl;//Vemos que el valor de score ha sido modificado por medio del puntero. 

    cout<<"----------------------------------------"<<endl;
    vector<string>stooges {"Larry", "Moe", "Curly"};
    vector<string>*vector_ptr{nullptr};
    vector_ptr = &stooges;
    cout<<"First stooges: "<<(*vector_ptr).at(0)<<endl;
    (*vector_ptr).at(1) = "Carlos";
    cout<<"Stooges: ";
    for(auto stooge:*vector_ptr)
        cout<<stooge<<" ";
    cout<<endl;

    cout<<endl;
    return 0;

}