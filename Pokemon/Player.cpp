#include "Player.hpp"
#include "PokemonChoice.hpp"
#include "PokemonType.hpp"
#include "Utility.hpp"
#include "Pokemon.hpp"
using namespace std;

Player::Player() {
	p_Name = "Trainer";
	p_ChosenPokemon = Pokemon();
}

Player::Player(string newName, Pokemon newChosenPokemon) {
	p_Name = newName;
	p_ChosenPokemon = newChosenPokemon;
}

Player::Player(Player& otherPlayer) {
	p_Name = otherPlayer.p_Name;
	p_ChosenPokemon = otherPlayer.p_ChosenPokemon;
}

void Player::choosePokemon(int choice) {
    switch (choice) {
    case 1:
        p_ChosenPokemon = Pokemon("Charmander", PokemonType::FireType, 100);
        break;
    case 2:
        p_ChosenPokemon = Pokemon("Bulbasaur", PokemonType::GrassType, 100);
        break;
    case 3:
        p_ChosenPokemon = Pokemon("Squirtle", PokemonType::WaterType, 100);
        break;
    default:
        p_ChosenPokemon = Pokemon("Pikachu", PokemonType::ElectricType, 100);
        break;
    }
    //cout << "Player " << p_Name << " chose " << p_ChosenPokemon.name << "!\n";
}