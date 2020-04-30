//
// Created by Aryeh Zinn on 30/4/20.
//

#include "Movies.h"

Movies::Movies() {
    movies = std::vector<Movie>();
}

void Movies::add_movie(std::string title, std::string rating) {
    if (!has_movie(title)) {
        movies.push_back(Movie(std::move(title), std::move(rating)));
    }
}

bool Movies::has_movie(std::string title) {
    bool has_movie = false;
    for (auto &movie: movies) {
        if (movie.get_title() == title) {
            has_movie = true;
        }
    }
    return has_movie;
}