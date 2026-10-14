#include <iostream>
using namespace std;
#include <string>

string reverse_string(const string& str);

int main(){
string str = "Hello, World!";
string reversed = reverse_string(str);
cout << "Original: " << str << endl;
cout << "Reversed: " << reversed << endl;
}


/* We use a const reference to avoid copying the string. It also prevents modification of the original string.
 * Basically, we're only allowing read access to the original string. */
string reverse_string(const string& str) { 
    string reversed; //This will hold the reversed string, it is initialized as an empty string.

// We use c_str() to get a pointer that points to the first character of the string
    const char* start = str.c_str();                    // Pointer to the first character
    const char* end = str.c_str() + str.size() - 1;     // Pointer to the last character

    while (end >= start) {
        reversed.push_back(*end);   // Append the character at the end pointer to the reversed string
        end--;
    }

    return reversed;
}