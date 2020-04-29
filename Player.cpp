//
// Created by Aryeh Zinn on 29/4/20.
//

#include "Player.h"

Player::Player(std::string name, int health, int xp, int attack, int defence)
    : name{name}, health{health}, xp{xp}, attack{attack}, defence{defence}
{
}

Player::Player(const Player &source)
    : name{source.name}, health{source.health}, xp{source.xp}, attack{source.attack}, defence{source.defence}
{
}

std::string Player::get_name() {
    return name;
}