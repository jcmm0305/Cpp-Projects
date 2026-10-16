/*NOTES:
    * lvalue (Local Value) is an object that occupies a persistent memory location:
        * int x = 10; // variable x has a persistent memory location, therefore it is an lvalue.
        * Additionally, 10 is an rvalue because it does not have a persistent memory location.
    * rvalue (Read-only Value) is a temporary value which does not have a persistent memory location:
        * int y = x + 5; // Here, x + 5 is an rvalue because it is a temporary value that does not have a persistent memory location.

    *rvalue references:
        * rvalue references are a type of reference that can bind to temporary objects (rvalues).
        * They are declared using the && syntax.
        * rvalue references allow for move semantics, which can improve performance by avoiding unnecessary copies of objects.
            * int &&rr = 5; // rr is an rvalue reference to the temporary value 5 (rvalue)
            * Why do we need rvalue references?
                - rvalue reference allows us to capture temporary objects in the move constructor and move its resources to another objects. 
    
    *lvalue references:
        * lvalue references are a type of reference that can bind to lvalues.
        * They are declared using the & syntax.
        * lvalue references allow for modifying the original object they refer to.
        *   int x = 10; // x is an lvalue
            int& ref = x; // ref is an lvalue reference to x (lvalue)
            ref = 20; // modifies the original object x
            //NOT POSSIBLE:
            int &r = 10; // error: cannot bind lvalue reference to rvalue (not allowed).

    To use the Move Constructor, we need rvalue reference, we need it to temporary object of which we want to transfer the ownership of the resources to another object.
    MOVE CONSTRUCTOR:
    * Allows stealing resources from a temporaty object, and provide those resources to some other object.
    * 
*/
#include <iostream>
#include <cstring>

class MyString{
    private:
        char* data;
    public:
        MyString(const char* s){ //s points to a const character, to a string in this case.
            /* Through a new operator I wanna allocate an array in the heap
               and that array should have the capability to hold our string ("Hello")*/
            data = new char[strlen(s)+1]; //Array of type char with the size of the string [strlen(s) = 5 + 1]. We reserve one memory location for our Null Character
            /* So now we will get a total of six blocks in the array where each block can hold a character, the "new" operator will return the address of the first block.
               We can store that in s1.data. Now s1.data can point to an array that can hold six characters*/
           
            strcpy(data, s); //Here we are copying our string to the array
            std::cout<<"Constructed!\n";
        }
        //After execution of this code, we will get a new array whit six blocks where each block can hold a character

        /*//Copy Constructor (Deep copy)
        MyString (const MyString& other){
            // The line below allows us to create a new array with the specific size
               The new operator will return the address which will be store in s2.data
            data = new char[strlen(other.data) + 1]; //other is the reference to s1
            strcpy(data, other.data);
            std::cout<<"Copies!\n";
            Now we have two arrays (s2 is the copy of s1):
                s1.data is pointing to an array with the string hello
                s2.data is pointing to a new array with the string hello 
        }*/
        //Destructor
        ~MyString(){
            delete[] data;
            std::cout<<"Destroyed!\n"; //Destroy will be display twice on the screen
        }
        //Print function:
        void print(){if(data) std::cout<<data<<"\n"; else std::cout<<"Empty\n";}
        /*Move Constructor:
           We need to define the move constructor instead of the copy constructor */
        MyString(MyString&& other){
            //This means s2.data is also pointing to the same array which is pointed by s1.data.
            data = other.data;//s2.data = s1.data
            other.data = nullptr;
            std::cout<<"Moved!\n";
        }
};

int main(){
    MyString s1("Hello");//s1 is a lvalue
    //Let's let's I want to create a new object as the copy of the s1 object
    //MyString s2 = s1; //We need a copy constructor
    MyString s2 = std::move(s1);

    s1.print();
    s2.print();
    /* What if we want to move the resources of s1 to s2? We use the Move constructor
       We don't want two different arrays, we only want one array which is pointed by s2.data (we want to transfer the ownership).
       We also neeed to tell the compiler that s1 should be treated as temporary object- therefore we need a rvalue reference here,because
       rvalue reference can bind to rvalue and an rvalue is a temporary object  */

    return 0;
}