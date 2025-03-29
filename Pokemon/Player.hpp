#include <iostream>
#include <string>
#include <limits>

#include "PokemonChoice.hpp"
#include "PokemonType.hpp"
#include "Utility.hpp"
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