#include<string>
#include "book.h"


//Constructor Initialization
Book::Book(std::string isbn_val, std::string title_val, std::string author_val, std::string pDate_val)
    :isbn{isbn_val}, title{title_val}, author{author_val}, pDate{pDate_val}, id{next_id++}{

    }
//Functions
const std::string& Book::get_isbn() const{return isbn;}
const std::string& Book::get_title() const{return title;}
const std::string& Book::get_author() const{return author;}
const std::string& Book::get_publishedDate() const{return pDate;}

int Book::next_id = 1;
