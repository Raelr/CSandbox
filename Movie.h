//
// Created by Aryeh Zinn on 30/4/20.
//

#ifndef UDEMYPRACTICE_MOVIE_H
#define UDEMYPRACTICE_MOVIE_H
#include <string>

class Movie {
private:
    std::string title;
    std::string rating;
    int watched;
public:
    Movie(std::string &&title, std::string &&rating, int &&watched = 0) noexcept ;
    void increment_watched_count();
    int get_watched_count();
    std::string get_rating();
    std::string get_title();
};


#endif //UDEMYPRACTICE_MOVIE_H
