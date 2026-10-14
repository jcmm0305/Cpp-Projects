#include <iostream>
using namespace std;

//WHY POINTERS CAN BE COMPARE WHEN THEY POINT TO THE SAME ARRAY?
int main(){
int arr[] {10, 20, 30, 40, 50};
//int arr[]{4000, 4004, 4008, 4012, 4016}; Watch it as a block of memory with 5 elements, each of size 4 bytes (assuming int is 4 bytes)
int *left  {arr};
/*Explaining why int *right {arr + 5 - 1} is valid:
 * First thing first, you're pasting the address of the first element in the array when you declare int *right = arr;
 *let's say 4000. When you add 5 to it, you're not adding the integer 5 as a value (4000 + 5 = 4005). In fact, you're adding
 *the size of an integer (4 bytes) five times (4000 + 5 * 4 = 4020) and then subtracting (1x4 = 4) which leads us to the last
 *position of this array [arr + 5 - 1 ] = [4000 + 20 - 4] = 4016 -> Last Position. */
int *right {arr + 5 - 1};

cout<< left  << "\n";        // some address
cout<< left + 1 << "\n";    // some address + 4
cout<< left + 2 << "\n";    // some address + 8
cout<< left + 3 << "\n";    // some address + 12
cout<< right << "\n";        // exactly 16 higher
cout<< right - left << "\n"; // 4  ← elements, not bytes!
cout<< (left < right) << "\n"; // 1 (true)

cout<<"-------------------------------------------------"<<endl;
}