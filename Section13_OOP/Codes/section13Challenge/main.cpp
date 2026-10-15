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
    //If we try to add a movie whose name is already in the movies collection, we should display this error to the user.
    my_movies.add_movie("Call me by your name", "PG-13", 4); //It works!!
    //- If we try to increment the watched count for a movie whose name is not in the movies collection, we should display this error to the user.
    my_movies.increment_watched("Find me"); //Displays the error, It works!!
    return 0;
}