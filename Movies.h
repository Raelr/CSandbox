//
// Created by Aryeh Zinn on 30/4/20.
//

#ifndef UDEMYPRACTICE_MOVIES_H
#define UDEMYPRACTICE_MOVIES_H

#include <vector>
#include <string>
#include "Movie.h"

class Movies {
private:
    std::vector<Movie> movies;
public:
    Movies();
    void add_movie(std::string title, std::string rating);
    bool has_movie(std::string title);
    void display_movies();
};


#endif //UDEMYPRACTICE_MOVIES_H
