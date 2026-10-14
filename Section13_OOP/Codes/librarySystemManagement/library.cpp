#include "library.h"

void Library::addBook(const Book &newBook){
    catalog.push_back(newBook);
}

const std::vector<Book>& Library::getCatalog() const {return catalog;}

std::size_t Library::bookCount() const{return catalog.size();}

Book* Library::findBookById(int id){
    for(std::size_t i = 0; i<catalog.size(); i++){
        if(catalog[i].get_id() == id){return &catalog[i];}
    }
    return nullptr;
}

