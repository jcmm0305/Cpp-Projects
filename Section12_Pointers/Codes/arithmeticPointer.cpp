#include <iostream>

using namespace std;

int main(){

    int scores[] {100,95,89,68,-1};
    //Inicializamos un puntero que apunta a un array
    int *score_ptr(scores); 

    while (*score_ptr!=-1){
        /* Mientras *score_ptr no valga -1 o llege a la direccion
        de ese elemento dentro del array, se imprime el valor.*/

        cout<<*score_ptr<<endl;
        score_ptr++;
    }

    cout<<"\n-----------------------"<<endl;
    score_ptr = scores; //Reiniciamos el puntero a la direccion del primer elemento del array
    while (*score_ptr!=-1){
        cout<<*score_ptr++<<endl;
    }

    cout<<"\n-----------------------"<<endl;
    string s1{"Frank"};
    string s2{"Frank"};
    string s3{"James"};

    string *p1{&s1}; //Creamos un puntero a string y lo inicializamos con la direccion de s1
    string *p2{&s2};
    string *p3{&s1};

    cout<<boolalpha; //Imprime true o false en vez de 1 o 0
    cout<<p1<<"=="<<p2<<": "<<(p1==p2)<<endl;//False p1 y p2 No apuntan a la misma dirección
    cout<<p1<<"=="<<p3<<": "<<(p1==p3)<<endl;//True p1 y p3 apuntan a la misma dirección

    //Ahora comparamos los valores a los que apuntan los punteros
    cout<<*p1<<"=="<<*p2<<": "<<(*p1==*p2)<<endl;//True los valores de s1 y s2 son iguales
    cout<<*p1<<"=="<<*p3<<": "<<(*p1==*p3)<<endl;//True los valores de s1 y s3 son iguales

    p3 = &s3; //Ahora p3 apunta a s3
    cout<<*p1<<"=="<<*p3<<": "<<(*p1==*p3)<<endl;//False los valores de s1 y s3 son diferentes

    cout<<"\n-----------------------"<<endl;
    char name[] {"Frank"};

    char *char_ptr1{nullptr};
    char *char_ptr2{nullptr};

    char_ptr1 = &name[0]; //char_ptr1 apunta a la primera letra de name
    char_ptr2 = &name[3]; //char_ptr2 apunta a la cuarta letra de name

    cout<<"In the string "<<name<<", "<<*char_ptr2<<" is "<<(char_ptr2-char_ptr1)<<" characters away from "<<*char_ptr1<<endl;

    cout<<endl;
    return 0;

}