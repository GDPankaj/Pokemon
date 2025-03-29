#include <iostream>
#include <string>
#include <limits>
enum class PokemonType;
//class Player;
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