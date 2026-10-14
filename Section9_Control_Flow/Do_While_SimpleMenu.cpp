#include<iostream>
using namespace std;
int main (){
    
    char selection {};
    do{
        cout<<"\n-----------------"<<endl;
        cout<<"1. Do this"<<endl;
        cout<<"2. Do that"<<endl;
        cout<<"3. Do something else"<<endl;
        cout<<"Q. Quit"<<endl;
        cout<<"Enter your selection: ";
        cin>>selection;
        switch (selection){
            case '1':
                cout<<"You chose 1 - doing this"<<endl;
                break;
            case '2':
                cout<<"You chose 2 - doing that"<<endl;
                break;
            case '3':
                cout<<"You chose 3 - doing something else"<<endl;
                break;
            case 'Q':
            case 'q':
                cout<<"Good bye!!"<<endl;
                break;
            default:
                cout<<"Fuck this!"<<endl;
        }

    }while(selection!='q' && selection!='Q');
    
    cout<<endl;
    return 0;
}
/*Notas:
Se usa AND y no OR  por lo siguiente
Si selection == 'q'
*Selection != 'q'--->Falso
*Selection != 'Q---->Verdadero'
Al ser OR, pues el bucle seguira repitiendose
sin importar si digitas q o Q por eso se utiliza
And ya que si tecleas q la primera condicion sera falsa
La segunda sera verdader pero al final sabemos que AND
al tener entradas 0,1 da como resultado negativo y el
bucle termina. */