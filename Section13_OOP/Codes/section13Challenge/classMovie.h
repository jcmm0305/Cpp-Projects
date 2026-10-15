#ifndef CLASSMOVIE_H
#define CLASSMOVIE_H
#include<string>

class Movie{

    private:
        std::string name;
        std::string rating;
            int watched;

    public:
        //Constructor
        Movie(std::string name_val, std::string rating_val, int watched_val);
        
        //Getters
        const std::string &get_name()const; 
        const std::string &get_rating()const;
        const int get_watched()const;
        //Setters
        void set_watched(int watched_val);

};





#endif
