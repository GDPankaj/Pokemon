#include <iostream>
using namespace std;

    enum class PokemonType 
    {
        FireType, WaterType, GrassType, ElectricType
    };
    enum class PokemonChoice 
    {
        Charmander, Bulbasaur, Squirtle, Invalid_Choice
    };
    string player_name;
    int playerChoice;
    int confirmation;
    
    int main() {
        PokemonChoice player_choice = PokemonChoice::Invalid_Choice;
        cout << "OAK : Hello my name is Oak. You can call me Mr. Oak or Professor Oak. I am here to introduce you to the world of pokemon.\nAre you ready?\nFirst tell me what is your name.\n";
        cin >> player_name;
        cout << "OAK : Hello " + player_name + ".\nGlad to meet you. Here are 3 pokemons that are left. Sorry these are the only ones remaining. They are not weak.";

        cout << "\n1. Charmender\n2. Bulbasaur\n3. Squirtle\n";
        cout << "OAK : Choose wisely just Give whichever number you want.\n";
        cin >> playerChoice;

        switch (playerChoice)
        {
        case 1:
            cout << "OAK : So you want Charmender. Are you sure? \n1. Yes\n2. No";
            player_choice = PokemonChoice :: Charmander;
            break;
        case 2:
            cout << "OAK : So you want Bulbasaur. Are you sure? \n1. Yes\n2. No";
            player_choice = PokemonChoice :: Bulbasaur;
            break;
        case 3:
            cout << "OAK : So you want Squirtle. Are you sure? \n1. Yes\n2. No";
            player_choice = PokemonChoice :: Squirtle;
            break;
        default:
            cout << "Take charmander as punishment";
            player_choice = PokemonChoice :: Charmander;
            break;
        }

        return 0;
    }
