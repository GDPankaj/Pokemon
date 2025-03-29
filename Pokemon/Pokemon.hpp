#include <iostream>
#include <string>
#include <limits>
#include "PokemonType.hpp"
#include "PokemonChoice.hpp"
#include "Utility.hpp"

using namespace std;

class Pokemon {
public :
    string name;
    PokemonType type;
    int health;

    Pokemon();
    Pokemon(string p_Name, PokemonType p_Type, int p_Health);
    Pokemon(const Pokemon& other);

    ~Pokemon();
    void attack();
};

#include "Player.hpp"