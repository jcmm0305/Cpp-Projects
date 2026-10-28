#ifndef MYSTRING_H
#define MYSTRING_H

class Mystring{

    private:
        char *str;

    public:
        Mystring(); //No-args constructor
        Mystring(const char* s); //Overloaded constructor (Behind scenes we'll be passing down the address of the first element of our string array)
        Mystring(const Mystring &source); //Copy constructor
        ~Mystring(); //Destructor

        //Overloaded Assign Operator
        Mystring& operator=(const Mystring &rhs); //We return a Mystring object
        //Methods
        void display() const;
        //Getters
        int get_length() const;
        const char *get_str() const;

};











#endif