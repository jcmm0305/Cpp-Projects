#include<iostream>
using namespace std;
int main (){
    /*int number{};
    cout<<"Enter an integer less than 100: ";
    cin>>number;
    
    while(number>=100){ //Or !number >=100
        cout<<"Enter an integer less than 100";
        cin>>number;
    }
    cout<<"Thanks"<<endl;*/
    bool done {false};
    int number {0};
    while(!done){
        cout<<"Enter an integer between 1 and 5: ";
        cin>>number;
        if(number <=1 || number>=5)
            cout<<"Out of range, try again"<<endl;
        else{
            cout<<"Thanks!"<<endl;
            done =true;
        }
    }
    return 0;
}
/*Notas:
Asi que primero asignamos done to false
mientras not done (!done) o sea, mientras 
done sea positivo se hace la operacion
una vez que se cumple la condicion entra el else
y alza mi bandera en done = true. Por lo que ahora,
not done seria no al veredadereo, por lo que ahora
done serial falso y como nosotros 
inicializamos la variable con done = false
not done = done por lo que se rompe el bucle. */