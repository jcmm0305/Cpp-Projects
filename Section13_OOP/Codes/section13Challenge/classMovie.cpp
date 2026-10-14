#include "classMovie.h"

//Constructor Initialization

Movie::Movie(std::string name_val, std::string rating_val, int watched_val)
    :name{name_val}, rating{rating_val}, watched{watched_val}{

    }


//Function Definitions
const std::string &Movie::get_name() const{return name;}
const std::string &Movie::get_rating() const{return rating;}
const int Movie::get_watched() const{return watched;}
