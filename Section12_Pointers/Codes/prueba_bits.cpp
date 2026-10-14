#include<iostream>
#include<cstdint>
using namespace std;
int main(){
    float number [2] = {24.33, 22.22};
    uint8_t* floatBytes = (uint8_t*)&number[0];
    for(int i = 0; i<4; i++){
        cout<<"Byte "<<i<<": 0x"<<hex<<(int)floatBytes[i];
        cout<<endl;
    }
    return 0;
}