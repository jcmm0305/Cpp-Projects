#ifndef CLASSMOVIES_H
#define CLASSMOVIES_H

#include<string>
#include<vector>
#include "classMovie.h"


class Movies{

    private:
        std::vector<Movie> catalogM; //We create a vector where all the movies will be stored 

    public:
        //Functions
        void add_movie (std::string name, std::string rating, int watched); //This is the funtion that will interact with our class Movie.
        void increment_watched(std::string movie_name); 
        void display_movies(std::vector<Movie> catalogM);
        //Getters
        /*With the & symbol we return a reference, we don´t make a copy of the whole catalog. 
        we return a vector.*/
        const std::vector<Movie>& get_catalog() const;


};





#endif