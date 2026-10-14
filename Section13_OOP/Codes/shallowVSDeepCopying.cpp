#include<iostream>
#include<string>
using namespace std;
/*NOTES:
*
* There are two types of copying in C++: shallow copying and deep copying.
* What happens when a class has a raw pointer as a data member?
* Shallow Copying: 
- Creates a copy of the object's members, but the pointer itself is copied, not the data it points to.
- This means that both the original and the copied object will point to the same memory location.
- This can be a problem if one of the object is destoyed, since the other would be pointing to released memory. 
- The two objects are not independent of each other, and changes made to the data through one object will affect the other.
*
* Deep Copying:
- We not only copy the pointer, but also create a new memory location and copy the data to that new location.
- This means each copy will have a pointer to unique storage in the heap and changes made to the data through one object will not affect the other.
- Deep copy when you have a raw pointer as a class data member.
*/
class Shallow{
    private:
        int *data; //raw pointer data member
    public:
        void set_data_value(int d){ *data = d;} //This function sets the value of the data member pointed to by the pointer.
        int get_data_value(){return *data;} //This function returns the value of the data member pointed to by the pointer.
        //Constructor
        Shallow(int d);
        //Copy constructor
        Shallow(const Shallow &source);
        //Destructor
        ~Shallow();
};
//Constructor definition
Shallow::Shallow(int d){
    data = new int; //Allocate memory for the data member
    *data = d; //Set the value of the data member
}
//Copy constructor definition
Shallow::Shallow(const Shallow &source)
    :data(source.data){
        cout<<"Copy constructor - shallow copy"<<endl;
    }
//Destructor definition
Shallow::~Shallow(){
    delete data;
    cout<<"Destructor freeig data"<<endl;
}

void display_shallow(Shallow s){ //Pass by value, copy constructor is called
    cout<<"Value of data: "<<s.get_data_value()<<endl;
}
// Here we have one problem, we ended up having obj1 pointing to the same address as "Shallow s" in the display functions
// So when the function ends and goes out of scope, the destructor is called and release the memory where pointer s is pointing to,
//but obj1 is still pointing to that same memory address, which is now released (invalid memory).

//----------------------------------------------------------------------------------------------------------------------------------

class Deep{
    private:
        int *data; //raw pointer data member
    public:
        Deep(int d); //Constructor
        Deep(const Deep &source); //Copy constructor
        ~Deep(); //Destructor
        //Method
        int get_data_value(){return *data;}
        void set_data_value(int d){*data = d;}
};

Deep::Deep(int d){
    data = new int; //We first allocate storage
    *data = d;
}

Deep::~Deep(){
    delete data; //free storage
    cout<<"Destructor freeing data"<<endl;
}

//Deep Copy Constructor:
Deep::Deep(const Deep &source){
    data = new int; //Allocate storage, new dinamically storage
    *data = *source.data;
    cout << "Copy constructor - deep"<<endl;
}

void display_deep(Deep s){ //Pass by value, copy constructor is called
    cout<<"Value of data: "<<s.get_data_value()<<endl;
}

int main(){
    //Shallow Copying example:
    Shallow obj1{100}; //Constructor is called
    display_shallow(obj1); //Pass obj1 by value, copy constructor is called

    Shallow obj2{obj1}; //Copy constructor is called
    obj2.set_data_value(1000); //Change the value of data member in obj
    //We are gonna crash when the program ends and the destructors are called for obj1 and obj2, since they are both pointing to invalid memory.

    //Deep Copying example: No crashing
    Deep obj3{100};
    display_deep(obj3);

    obj3.set_data_value(1000);
    Deep obj4{obj3};
    
    return 0;
    
}