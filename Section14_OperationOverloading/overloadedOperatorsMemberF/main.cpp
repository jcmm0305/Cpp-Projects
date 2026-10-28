/*Notes:

    * C++ allows us to overload operators as member methods or global non-member functions
    * Unary operators as member methods (++,--,-,!)
        * Unary operators work on one operand
        * Used them if we wanted to work with our hypothetical number class. 
        * Examples of applications:
            - To make a string lowercase [operator- ()]
    * Binary operatos as member methods
        * They work on two operands
        * Addition, substraction, division, multiplication, equality operators and many more. 
            *They can return a newly created sum or difference objects by value


*/

int main(){

    cout<<boolalpha<<endl;

    Mystring larry{"LARRY"};
    Mystring moe{"Moe"};

    Mystring stooge = larry;

    cout<<"Is larry equals to moe? "<<larry==moe<<endl;
    cout<<"Is larry equals to stooge? "<<larry==stooge<<enld;

    larry.display();
    Mystring larryLow = -larry;
    larryLow.display();

    Mystring stooges = larry + "Moe";
    //Mystring stooges = "Larry"+ moe; //Compile error

    Mystring two_stooges = moe + " " = "Larry";
    two_string.display();

    Mystring three_stooges = moe + "" + larry + "" + "Curly";
    three_stooges.display();

    return 0;
}