#ifndef LIBRARY_H_
#define LIBRARY_H_

#include<vector>
#include "book.h"

//This class will hand our catalog 
class Library{
    private:
        std::vector<Book> catalog; //We create a vector called catalog with the Book information

    public:
        //Putting data in and getting data out
        void addBook(const Book &newBook);
        const std::vector<Book>& getCatalog() const; //Here we are asking to create a function to return a vector filled with Book objects

        std::size_t bookCount() const;

        Book* findBookById(int id);
};

#endif