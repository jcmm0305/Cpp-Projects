#include<iostream>
#include<vector>
using namespace std;
int main(){
    int num_items{};

    cout<<"How many data items do you have?: ";cin>>num_items;

    vector<int> data {};

    for(int i{1};i<=num_items;++i){
        int data_item{};
        cout<<"Enter data item "<<i<<endl;
        cin>>data_item;
        data.push_back(data_item);
    }
    cout<<"Displaying Histogram"<<endl;
    for(auto value:data){
        for(int i{1};i<=value;++i){
            cout<<"-";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}