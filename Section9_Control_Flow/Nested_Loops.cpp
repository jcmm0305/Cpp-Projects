#include<iostream>
#include<vector>
using namespace std;

int main(){
    for (int outer_value{1}; outer_value<=2;outer_value++)
        for(int inner_value{1};inner_value<=3;inner_value++)
            cout<<outer_value<<", "<<inner_value<<endl;

    for(int num1 {1}; num1<=10; num1++){
        for(int num2{1}; num2<=10; num2++)
            cout<<num1 <<" * "<<num2
                <<" = "<<num1*num2<<endl;
    }
    cout<<"----------------------------------"<<endl;

    int grid[5][3] {}; //Array con 5 filas y 3 columnas
    for(int row{0}; row<5;++row){
        for(int col{0}; col<3; ++col){
            grid[row][col]=1000;
        }
    }
    for(int row{0};row<5;++row){
        for(int col{0};col<3;++col){
            cout<<grid[row][col]<<" ";
        }
        cout<<endl; //Pasa a la siguiente fila
    }
    cout<<"-------------------------------"<<endl;
    vector<vector<int>> vector_2d{ //A vector of vectors
        {1, 2, 3},
        {10, 20, 30, 40},
        {100, 200, 300, 400, 500}
    };
    for(auto vec:vector_2d){
        for(auto val:vec){
            cout<<val<<" ";
        }
        cout<<endl;
    }

}