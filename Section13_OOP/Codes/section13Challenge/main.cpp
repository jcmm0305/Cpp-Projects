#include<iostream>
#include "classMovies.h"

int main(){

    //We create our object
    Movies my_movies;
    //We add our fist movie
    my_movies.add_movie("Call me by your name", "PG-13", 4);
    my_movies.display_movies(my_movies.get_catalog());
    //We increment times watched by one
    my_movies.increment_watched("Call me by your name");
    my_movies.display_movies(my_movies.get_catalog());
    
}