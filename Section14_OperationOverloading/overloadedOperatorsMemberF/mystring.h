#ifndef MYSTRING_H
#define MYSTRING_H

class Mystring{
    private:
        char *str;
    public:
        Mystring();                                //No-Args Constructor
        Mystring(const char* s);                   //Overloaded Constructor
        Mystring(const Mystring &source);          //Copy Constructor
        Mystring(Mystring &&source);               //Move constructor
        ~Mystring();                               //Destructor

        Mystring &operator=(const Mystring &rhs);  //Copy Assignment
        Mystring &operator=(Mystring &&rhs);       //Move Assignment

        Mystring operator-() const;                       //Make lowercase
        Mystring operator+(const Mystring &rhs) const;   //Concatenate
        bool operator==(const Mystring &rhs) const;     //Equalitty

        void display() const;
        int get_length()const;
        const char *get_str() const;

};















#endif