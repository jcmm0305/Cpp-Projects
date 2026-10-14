/*So, I wanna dynamically allocate memory using pointers */
#include <iostream>
using namespace std;

/*In the function definition we specify that the function 
will return a pointer to an integer*/

int *largest_int(int *int_ptr1, int *int_ptr2);

int *create_array(size_t size, int init_value = 0);

void display(const int *const my_array, size_t size);

int main(){
    int a{100};
    int b{200};
    int *largest_ptr{nullptr};
    largest_ptr = largest_int(&a, &b);
    cout<< "The largest integer is: " << *largest_ptr << endl;

    cout<<"---------------------"<<endl;

    int *my_array{nullptr};
    size_t size{};
    int init_value{};

    cout<<"How many integers would you like to allocate? ";
    cin>>size;
    cout<<"What value would you like them initialized to? ";
    cin>>init_value;

    my_array = create_array(size, init_value);

    display(my_array, size);

    delete [] my_array;

    return 0;


}

int *largest_int(int *int_ptr1, int *int_ptr2){
    if (*int_ptr1 > *int_ptr2){
        return int_ptr1;        
    }
    else 
        return int_ptr2;
}

int *create_array(size_t size, int init_value){
    int *new_storage = new int[size];
    for (size_t i{0}; i<size; i++)
        *(new_storage + i) = init_value;
    return new_storage;
}

void display(const int *const my_array, size_t size){
    for (size_t i{0}; i<size; i++)
        cout<<my_array[i]<<" ";
}