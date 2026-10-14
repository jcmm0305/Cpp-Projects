#include<iostream>
#include "interface.h"

void display_catalog(const Library& lib){
    const std::vector<Book>& booklist = lib.getCatalog();
    if(!booklist.empty()){
        for(std::size_t i = 0; i<booklist.size();i++){
            std::cout << booklist[i].get_id() << " "
                      << booklist[i].get_title() << " by "
                      << booklist[i].get_author() <<std::endl;
        }
    }
    else{
        std::cout<<"No books in catalog"<<std::endl;
    }
}

void display_book(const Book& book_details){
    std::cout<<"ISBN: "<<book_details.get_isbn()<<"/n";
    std::cout<<"Title: "<<book_details.get_title()<<"/n";
    std::cout<<"Author: "<<book_details.get_author()<<"/n";
    std::cout<<"Published Date: "<<book_details.get_publishedDate()<<"/n";
}