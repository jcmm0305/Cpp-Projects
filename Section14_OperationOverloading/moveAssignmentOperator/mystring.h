#ifndef MYSTRING_H
#define MYSTRING_H

class Mystring{
    private:
        char* str;

    public:

        Mystring();               //No-args constructor
        Mystring(const char *s); //Overloaded Constructor
        
        Mystring(const Mystring &source); //Copy Constructor
        Mystring( Mystring &&Source);     //Move Constructor
        ~Mystring();                      //Destructor

        Mystring& operator=(const Mystring &rhs); //Copy Assignment Operator
        Mystring& operator=(Mystring &&rhs);     //Move Assignment Operator
        //We use '&&' to tell the compiler that rhs is an r-value reference (we pass it by reference)

        void display()const;
        int get_length()const;
        const char *get_str()const;
        
        

};


#endif