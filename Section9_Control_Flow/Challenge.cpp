#include<iostream>
#include<vector>
using namespace std;


vector<int>list = {};
char ch {};

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
        cout<<"\nEnter your choice: ";cin>>ch;

        switch(ch){

            case 'p':
            case 'P':
                if(list.size()!=0)    
                    for(size_t i{0};i<list.size();++i)
                        cout<<list[i]<<", ";
                else
                    cout<<"[] - the list is empty"<<endl;
                break;
            case 'a':
            case 'A':
                {
                int num {};
                cout<<"Enter an integer to add to the list: ";cin>>num;
                list.push_back(num);
                cout<<num<<" added"<<endl;
                break;
                }
            case 'm':
            case 'M':
                {
                int sum {0};
                if(list.size()!=0){
                    for(auto n:list)
                        sum+=n;
                        if(sum>0){
                            cout<<"The mean is: "<<static_cast<double>(sum)/list.size()<<endl; // Permite realizar conversiones explicitas
                        }                                                                      // de tipos de datos
                        else
                            cout<<"We can divide between 0";
                    }
                else
                    cout<<"There are not enough number to calculate the mean"<<endl;
                break;      
                }
            case 's':
            case 'S':
                {
                int smallest = list.at(0);
                for(auto num:list)
                    if(num<smallest)
                        smallest = num;
                    else   
                        continue;
                        cout<<"The smallest number is: "<<smallest<<endl;
                break;
                }
            case 'l':
            case 'L':
                {
                int largest = list.at(0);
                for(auto num:list)
                    if(num>largest)
                        largest = num;
                    else   
                        continue;
                        cout<<"The largest number is: "<<largest<<endl;
                break;
                }
            case 'd':
            case 'D':
                list.clear();
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
