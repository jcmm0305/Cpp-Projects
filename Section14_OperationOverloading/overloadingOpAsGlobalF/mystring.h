#ifndef MYSTRING_H
#define MYSTRING_H


class Mystring{
    
    //The class has to grant friendship
    friend bool operator==(const Mystring &lsh, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    private:
        char *str;

    public:
        Mystring(); //No-Args Constructor
        Mystring(const char *s); //Overloaded Constructor
        Mystring(const Mystring &source); //Copy Constructor
        Mystring(Mystring &&source); //Move Constructor
        ~Mystring(); //Destructor

        Mystring &operator=(const Mystring &rhs); //Copy Assign Operator
        Mystring &operator=(Mystring &&rhs); //Move Assign Operator

        void display() const;
        int get_length() const;
        const char *get_str() const;


};

#endif