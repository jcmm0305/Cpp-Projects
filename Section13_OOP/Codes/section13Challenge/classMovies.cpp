#include<iostream>
#include "classMovies.h"

void Movies::add_movie(std::string name, std::string rating, int watched){
    //First we search in the whole list
    for(const auto &movie : catalogM){
        if(movie.get_name() == name){
            std::cout<<"The movie was already added"<<std::endl; //We found it
            return; //Stop the function here and exit
        }
    }
    catalogM.push_back(Movie{name,rating,watched}); //Not found it, add the movie.
}

const std::vector<Movie>&Movies::get_catalog()const{
    return catalogM;
}
/* OLD VERSION:
void Movies::display_movies(std::vector<Movie> catalogM){

    for(size_t i = 0; i<catalogM.size(); i++){
        std::cout<<"Movie "<<"["<<i+1<<"]"<<std::endl;
        std::cout<<"Name: "<<catalogM[i].get_name()<<std::endl;
        std::cout<<"Rating: "<<catalogM[i].get_rating()<<std::endl;
        std::cout<<"Times Watched: "<<catalogM[i].get_watched()<<std::endl;
        std::cout<<"------------------------------------"<<std::endl;
    }

}*/
void Movies::display_movies(std::vector<Movie> catalogM){
    int i = 0;
    for(const auto &movie : catalogM){
        std::cout<<"Movie "<<"["<<i+1<<"]"<<std::endl;
        std::cout<<"Name: "<<movie.get_name()<<std::endl;
        std::cout<<"Rating: "<<movie.get_rating()<<std::endl;
        std::cout<<"Times Watched: "<<movie.get_watched()<<std::endl;
        std::cout<<"-----------------------------------"<<std::endl;
    }
}

/*OLD VERSION
void Movies::increment_watched(std::string movie_name){
    for(size_t i = 0; i<catalogM.size(); i++){
        if(movie_name == catalogM[i].get_name()){
            int timesW = catalogM[i].get_watched();
            catalogM[i].set_watched(++timesW);
        }
    }
}*/
void Movies::increment_watched(std::string movie_name){
    /*Breaking down this for loop:
        * "auto" let the compiler to identify the data type of the items stored in my collection automatically
        * With "&" (reference) we don't create a copy of our item, we step on it and directly modify it as we create a temporary nickname for it.  
        */
    for(auto &movie : catalogM){
        if(movie.get_name() == movie_name){
            movie.set_watched(movie.get_watched()+1);
            return;
        }
    }
}