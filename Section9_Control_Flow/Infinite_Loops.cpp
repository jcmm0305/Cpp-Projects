#include<iostream>
using namespace std;

int main(){
   // for(;;)
    //   cout<<"This will print forever"<<endl;
    
     //   while (true)
       //     cout<<"this will print forever"<<endl;

        //do{
          //  cout<<"This will print forever"<<endl;
        //} while (true);

        while(true){
            char again{};
            cout<<"Do you want to loop again? (Y/N): ";cin>>again;
            if(again== 'N' || again=='n')
                break;
        }

}


/*Notes:
Infinite Loops-----> the condition expression always evaluate to true
                     This is usually a programmer error
                     sometimes you can include breaks in the body to control them
                     Sometimes are exactly what we need: Event loop in an event-driven program
                                                         Operating system*/