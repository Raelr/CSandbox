//
// Created by Aryeh Zinn on 30/4/20.
//

#include "Movies.h"

Movies::Movies() {
    movies = std::vector<Movie>();
}

void Movies::add_movie(std::string title, std::string rating) {
    if (!has_movie(title)) {
        movies.emplace_back(Movie(std::move(title), std::move(rating)));
    }
}

bool Movies::has_movie(const std::string &title) {
    bool has_movie = false;
    for (auto &movie: movies) {
        if (movie.get_title() == title) {
            has_movie = true;
        }
    }
    return has_movie;
}

void Movies::display_movies() {
    if (!movies.empty()) {
        std::cout << "Movies: [ " << std::endl;
        for (auto &movie: movies) {
            std::cout << "  " << movie.get_title() << " : " << movie.get_rating() << " : " << movie.get_watched_count() << std::endl;
        }
        std::cout << "]" << std::endl;
    }
}

void Movies::increment_movie_count(const std::string &title) {
    for (auto &m : movies) {
        if (m.get_title() == title) {
            m.increment_watched_count();
        }
    }
}
