#include<iostream>
#include<string>
using namespace std;
/*Notes:
Estructuras: 
- Almacenan datos de diferentes tipos
-Se puede utilizar una estructura como TIPO para definir variables. Cuando se define una varible de tipo
estructura, se guardan todos los campos dentros de esta variable.*/

struct estudiante{
        string nombre{""};
        int edad {};
        int scholar_year {};
        double average {};
    };
int main(){
    struct estudiante estudiante_1;
    estudiante_1.nombre = "Juan Carlos";
    estudiante_1.edad = 23;
    estudiante_1.scholar_year = 9;
    estudiante_1.average = 8.7;

    //Para imprimir valores de manera mas rapida, podemos pasar la estructura como argumento a una funcion
    void imprimir_struct()
    
    return 0;
}