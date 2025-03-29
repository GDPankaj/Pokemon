#include "Pokemon.hpp"
#include "PokemonType.hpp"
#include "PokemonChoice.hpp"
#include "Utility.hpp"
using namespace std;

Pokemon::Pokemon() {
    name = "Pikachu";
    type = PokemonType::ElectricType;
    health = 10;
}

Pokemon::Pokemon(string p_Name, PokemonType p_Type, int p_Health) {
    name = p_Name;
    type = p_Type;
    health = p_Health;
}

Pokemon::Pokemon(const Pokemon& other) {
    name = other.name;
    type = other.type;
    health = other.health;
    cout << "A new Pokemon has been copied from " << other.name << "!\n";
}

Pokemon::~Pokemon() {
    //cout << name << " has been released.\n";
}

void Pokemon::attack()
{
    cout << name << " Attacks With Powerful Attack!!\n"; //<< endl;
}