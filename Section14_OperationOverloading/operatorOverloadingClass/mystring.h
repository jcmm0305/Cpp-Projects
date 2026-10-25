#ifndef MYSTRING_H
#define MYSTRING_H

//Let's add overloaded operators to this basic class called Mystring.
class Mystring { //We wanna model strings with this class.
    private:
        char *str; //Pointer to a char[] ARRAY that holds a C-style string

    public:
        Mystring(); // No arg constructor
        Mystring(const char *s); // A constructor that expects a c-style string
        Mystring(const Mystring &source); //Copy Constructor
        ~Mystring(); //Destructor

        void display() const; //We don't make a copy
        //Getters
        int get_length() const;
        const char *get_str() const; //We return a pointer to the string
};





#endif