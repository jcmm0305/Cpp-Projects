#include<iostream>
#include "account.h"

/*How to run multiple .cpp files in terminal:
First on Power Shell once you are in the correct directory write: g++ (Get-Item *.cpp) -o output
Ese comando creara un archivo ejecutable llamado output
Despues, en cmd-terminal ve a la direccion del folder y escribe: "output".
Con eso ejecutaras el programa 

Para ejecutar este programa, utiliza g++.exe*/

int main(){
    Account carlos_account;
    carlos_account.set_name("Carlos Account");
    carlos_account.set_balance(1000.0);

    if (carlos_account.deposit(444.0))
        std::cout<< "Deposit OK" <<std::endl;
    else
        std::cout<< "Deposit Not allowed"<<std::endl;

    if (carlos_account.withdraw(500.0))
        std::cout<< "Withdraw OK" << std::endl;
    else
        std::cout<< "Not sufficient funds" << std::endl;

    if(carlos_account.withdraw(1500.0))
        std::cout<< "Withdraw OK" << std::endl;
    else
        std::cout<< "Not sufficient funds" << std::endl;

    return 0;

}