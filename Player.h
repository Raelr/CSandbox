//
// Created by Aryeh Zinn on 29/4/20.
//

#ifndef UDEMYPRACTICE_PLAYER_H
#define UDEMYPRACTICE_PLAYER_H
#include <string>

class Player {
private:
    std::string name;
    int health;
    int xp;
    int attack;
    int defence;
public:
    explicit Player(std::string name = "None", int health = 100, int xp = 0, int attack = 10, int defence = 5);
    std::string get_name();
    Player(const Player &source);
};


#endif //UDEMYPRACTICE_PLAYER_H
