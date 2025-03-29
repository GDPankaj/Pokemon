#include <iostream>
#include <string>
#include <limits>
#include "Pokemon.hpp"
using namespace std;

class Player {
public:
    string p_Name;
    Pokemon p_ChosenPokemon;

    Player();
    Player(string newName, Pokemon newChosenPokemon);
    Player(Player& otherPlayer);
    void choosePokemon(int choice);
};