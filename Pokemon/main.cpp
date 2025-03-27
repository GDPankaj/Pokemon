#include <iostream>
#include <string>
using namespace std;

enum class PokemonType
{
    FireType, WaterType, GrassType, ElectricType
};


enum class PokemonChoice
{
    Charmander, Bulbasaur, Squirtle, Invalid_Choice
};

class Pokemon 
{
public:
    string name;
    PokemonType type;
    int health;

    Pokemon() 
    {
        name = "Pikachu";
        type = PokemonType::ElectricType;
        health = 10;
    }
    Pokemon(string p_Name, PokemonType p_Type, int p_Health) 
    {
        name = p_Name;
        type = p_Type;
        health = p_Health;
    }
    // Copy constructor
    Pokemon(const Pokemon& other) {
        name = other.name;
        type = other.type;
        health = other.health;
        cout << "A new Pokemon has been copied from " << other.name << "!\n";
    }

    // Destructor
    ~Pokemon() {
        cout << name << " has been released.\n";
    }
    void attack() 
    {
        cout << name << " Attacks With Powerful Attack!!\n"; //<< endl;
    }
};

class Player
{
public:
    string p_Name;
    Pokemon p_ChosenPokemon;

    Player() 
    {
        p_Name = "Trainer";
        p_ChosenPokemon = Pokemon();
    }

    Player(string newName, Pokemon newChosenPokemon)
    {
        p_Name = newName;
        p_ChosenPokemon = newChosenPokemon;
    }

    Player(Player& otherPlayer)
    {
        p_Name = otherPlayer.p_Name;
        p_ChosenPokemon = otherPlayer.p_ChosenPokemon;
    }

    void choosePokemon(int choice) {
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
};

class ProfessorOak
{
public:
    string name;

    void greetPlayer(Player& player)
    {
        cout << name << " : Yo! whatsup Ma men! Welcome to the world of Pokemon!!" << endl;
        cout << name << " : My name is OAK. You can call me Professor Oak." << endl;
        cout << name << " : Before we get started. Tell me your name." << endl;
        getline(cin, player.p_Name);
    }

    void offerPokemonChoice(Player& player)
    {
        cout << name << " : Cool!! so, " << player.p_Name << " Nice to meet you." << endl;
        cout << name << " : You must be eager to start your adventure. But first, you will need a Pokemon of your own!\n";
        cout << name << " : I have three Pokemon here with me. They’re all quite feisty!\n";

        cout << name << ": Choose wisely...\n";
        cout << "1. Charmander - The fire type. A real hothead!\n";
        cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
        cout << "3. Squirtle - The water type. Cool as a cucumber!\n";
        cout << "Unidentified Pokemon. Not sure. \n";

        //choosing
        int choice;
        cout << name << ": So, which one will it be? Enter the number of your choice: ";
        cin >> choice;
        player.choosePokemon(choice);
        goodbyePlayer(choice, player);
    }

    void goodbyePlayer(int choice, Player& player)
    {
        switch (choice)
        {
        case 1:
            cout << name << " : Charmander!, A Fiery choice." << player.p_Name << endl;
            break;
        case 2:
            cout << name << " : Bulbasaur!, A Leafy choice." << player.p_Name << endl;
            break;
        case 3:
            cout << name << " : Squirtle!, A Watery choice." << player.p_Name << endl;
        default:
            cout << name << " : Pikachu!, A Sparking choice." << player.p_Name << endl;
            break;
        }

        cout << name << " : " << player.p_ChosenPokemon.name << " and you, " << player.p_Name << ", are going to be the best of friends!" << endl;
        cout << name << " : Your journey begins now!Get ready to explore the vast world of Pokémon!" << endl;
    }
};


//string player_name;
//int playerChoice;
//int confirmation;
    
int main() 
{
    Player player;
    ProfessorOak oak;
    Pokemon placeHolderPokemon;

    Pokemon defaultPokemon = Pokemon();
    Pokemon Charmander = Pokemon("Charmander", PokemonType::FireType, 100);
    Pokemon Bulbasaur = Pokemon("Bulbasaur", PokemonType::GrassType, 100);
    Pokemon copyBulbasaur = Pokemon(Bulbasaur);

    cout << "Charmader pokemon's name is " << Charmander.name << " its health is " << Charmander.health << endl;
    cout << "Bulbasaur pokemon's name is " << Bulbasaur.name << " its health is " << Bulbasaur.health << endl;
    cout << "copyBulbasaur pokemon's name is " << copyBulbasaur.name << " its health is " << copyBulbasaur.health << endl;
    copyBulbasaur.health = 80;
    copyBulbasaur.name = "copy bulbasaur";
    cout << "Bulbasaur pokemon's name is " << Bulbasaur.name << " its health is " << Bulbasaur.health << endl;
    cout << "copyBulbasaur pokemon's name is " << copyBulbasaur.name << " its health is " << copyBulbasaur.health << endl;

    placeHolderPokemon.name = "Pikachu";
    placeHolderPokemon.type = PokemonType::ElectricType;
    placeHolderPokemon.health = 40;

    player.p_Name = "Trainer";

    oak.name = "Professor Oak";

    oak.greetPlayer(player);
    oak.offerPokemonChoice(player);

    cout << player.p_Name << " has chosen " << player.p_ChosenPokemon.name << " as his first Pokemon";
    return 0;
}
