#include <iostream>
#include <vector>
using namespace std;
//Accesing vector elements
int main (){
//Podemos iterar sobre un vector de la siguiente forma
    vector <int> test_scores {100,95,99};
    for (int i=0; i<test_scores.size(); i++){
        cout<<test_scores[i]<<endl;
    }

//cout<<test_scores[0]<<endl;
//cout<<test_scores[1]<<endl;
//cout<<test_scores[2]<<endl;
    //Metodo Pushback, agrega un elemento al final del vector
    test_scores.push_back(80);
    test_scores.push_back(90);
    cout<<"------------------------------"<<endl;
    for (int i=0; i<test_scores.size(); i++){
        cout<<test_scores[i]<<endl;
    }
    //Example of a 2D-vector
    //A vector of vectors
    vector<vector<int>>movie_ratings{
        {1,2,3,4},
        {1,2,4,4}, //Rows reviews and columns movies
        {1,3,4,5}
    };
    return 0;
}