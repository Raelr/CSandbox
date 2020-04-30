//
// Created by Aryeh Zinn on 30/4/20.
//

#include "Movie.h"

#include <utility>

Movie::Movie(std::string &&title, std::string &&rating, int &&watched) noexcept
    : title{title}, rating{rating}, watched{watched}
{
}

int Movie::get_watched_count() {
    return watched;
}

void Movie::increment_watched_count() {
    watched++;
}

std::string Movie::get_rating() {
    return rating;
}

std::string Movie::get_title() {
    return title;
}