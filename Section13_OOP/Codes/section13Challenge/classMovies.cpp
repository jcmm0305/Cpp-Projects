#include<iostream>
#include "classMovies.h"

void Movies::add_movie(std::string name, std::string rating, int watched){
    catalogM.push_back(Movie{name, rating, watched});
}

const std::vector<Movie>&Movies::get_catalog()const{
    return catalogM;
}

void Movies::display_movies(std::vector<Movie> catalogM){

    for(size_t i = 0; i<catalogM.size(); i++){
        std::cout<<"Movie "<<"["<<i+1<<"]"<<std::endl;
        std::cout<<"Name: "<<catalogM[i].get_name()<<std::endl;
        std::cout<<"Rating: "<<catalogM[i].get_rating()<<std::endl;
        std::cout<<"Times Watched: "<<catalogM[i].get_watched()<<std::endl;
        std::cout<<"------------------------------------"<<std::endl;
    }

}