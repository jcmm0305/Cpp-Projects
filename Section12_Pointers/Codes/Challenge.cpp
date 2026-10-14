//Section 12
//Challenge
/*Write a C++ function named apply_all that expects two arrays of integers and their sizes and dynamically
 *allocates a new array of integers whose size is the product of the 2 array sizes
 *
 * The function should loop through the second array and multiply each element across each element of array 1
 * and store the product in the newly created array.
 * 
 * The fuction should return a pointer to the newly allocated array.
 * 
 * You can also write a print function that expects a pointer to an array of integers and its size and display
 * the elements in the array.*/

 /*NOTES:
 * *(ptr+i) is equivalent to ptr[i]
 * *ptr++ is equivalent to *(ptr++)
 * *(ptr + i) it stays still in the same position when the loop is done
 * *ptr++ moves to the next position in the array when the loop is done */
#include <iostream>
using namespace std;

int *apply_all(int *arr1, size_t size1, int *arr2, size_t size2);
void print(const int *results, size_t size);

int main(){
    int arr1[] = {10, 20, 30};
    int arr2[] = {1, 2, 3, 4, 5};
    size_t size1 = sizeof(arr1)/sizeof(arr1[0]); //Good trick to get the size of an array
    size_t size2 = sizeof(arr2)/sizeof(arr2[0]);
    int *results = apply_all(arr1, size1, arr2, size2);

    print(results, size1 * size2);
    delete[] results;
}
/*NOTE:
 * A pointer can't walk and mark or assign at the same time*/
int *apply_all(int * arr1, size_t size1, int *arr2, size_t size2){
    int *results = new int[size1*size2];
    int *ptr = results;
    for(size_t i{0}; i<size1; i++){
        for(size_t j{0}; j<size2; j++){
            //results[i*size2+j] = arr1[i] * arr2[j];
            /*Second way to do it:
              A second pointer do the walking and marking, 
              while the first pointer is used to mark the firstposition in the array
              so the address to retrun would of the first element*/
            *ptr++ = arr1[i] * arr2[j]; 
        }
    }
    return results;
}

void print(const int *results, size_t size){
    for(size_t i{0}; i<size; i++){
        cout << results[i] << " ";
    }
    cout << endl;
}
