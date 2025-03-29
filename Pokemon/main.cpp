#include <iostream>
#include <string>
#include <limits>
#include "PokemonType.hpp"
#include "PokemonChoice.hpp"
#include "Utility.hpp"
#include "Player.hpp"
using namespace std;

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
        //cout << name << " has been released.\n";
    }
    void attack() 
    {
        cout << name << " Attacks With Powerful Attack!!\n"; //<< endl;
    }
};

//class Player
//{
//public:
//    string p_Name;
//    Pokemon p_ChosenPokemon;
//
//    Player() 
//    {
//        p_Name = "Trainer";
//        p_ChosenPokemon = Pokemon();
//    }
//
//    Player(string newName, Pokemon newChosenPokemon)
//    {
//        p_Name = newName;
//        p_ChosenPokemon = newChosenPokemon;
//    }
//
//    Player(Player& otherPlayer)
//    {
//        p_Name = otherPlayer.p_Name;
//        p_ChosenPokemon = otherPlayer.p_ChosenPokemon;
//    }
//
//    void choosePokemon(int choice) {
//        switch (choice) {
//        case 1:
//            p_ChosenPokemon = Pokemon("Charmander", PokemonType::FireType, 100);
//            break;
//        case 2:
//            p_ChosenPokemon = Pokemon("Bulbasaur", PokemonType::GrassType, 100);
//            break;
//        case 3:
//            p_ChosenPokemon = Pokemon("Squirtle", PokemonType::WaterType, 100);
//            break;
//        default:
//            p_ChosenPokemon = Pokemon("Pikachu", PokemonType::ElectricType, 100);
//            break;
//        }
//        //cout << "Player " << p_Name << " chose " << p_ChosenPokemon.name << "!\n";
//    }
//};

class ProfessorOak
{
public:
    string name;

    void greetPlayer(Player& player)
    {
        cout << endl << "------------------Welcome Bro------------------" << endl << endl;
        cout << name << " : Yo! whatsup Ma men! Welcome to the world of Pokemon!!" << endl;
        Utility :: waitForEnter();
        cout << name << " : My name is OAK. You can call me Professor Oak." << endl;
        Utility :: waitForEnter();
        cout << name << " : Before we get started. Tell me your name." << endl;
        getline(cin, player.p_Name);
        
    }

    void offerPokemonChoice(Player& player)
    {
        Utility::waitForEnter();
        Utility::clearConsole();
        cout << endl << "------------------Cool Name------------------" << endl << endl;
        cout << name << " : Cool!! so, " << player.p_Name << " Nice to meet you." << endl;
        Utility::waitForEnter();
        cout << name << " : You must be eager to start your adventure. But first, you will need a Pokemon of your own!\n";
        Utility::waitForEnter();
        cout << name << " : I have three Pokemon here with me. They're all quite feisty!\n";
        Utility::waitForEnter();
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
        Utility::waitForEnter();
        Utility::clearConsole();
        cout << endl << "------------------Good Choice------------------" << endl << endl;
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
        Utility::waitForEnter();
        cout << name << " : " << player.p_ChosenPokemon.name << " and you, " << player.p_Name << ", are going to be the best of friends!" << endl;
        Utility::waitForEnter();
        cout << name << " : Your journey begins now!Get ready to explore the vast world of Pokémon!" << endl;
    }

    void explainMainQuest(Player& _player) 
    {
        Utility::waitForEnter();
        Utility::clearConsole();
        cout << endl << "------------------Your Quest------------------" << endl << endl;

        cout << "Professor Oak: Oak-ay" << _player.p_Name << "!, I am about to explain you about your upcoming grand adventure.\n";
        Utility::waitForEnter();
        cout << "Professor Oak: You see, becoming a Pokemon Master is no easy feat. It takes courage, wisdom, and a bit of luck!\n";
        Utility::waitForEnter();
        cout << "Professor Oak: Your mission, should you choose to accept it—and trust me, you really don't have a choice is to collect all the Pokemon Badges and conquer the Pokemon League.\n";
        Utility::waitForEnter();
        cout << "\n" << _player.p_Name << ": Wait... that sounds a lot like every other Pokemon game out there...\n";
        Utility::waitForEnter();
        cout << "Professor Oak: Shhh! Don't break the fourth wall, " << _player.p_Name << "! This is serious business!\n";
        Utility::waitForEnter();
        cout << "\nProfessor Oak: To achieve this, you'll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokemon healthy at the PokeCenter.\n";
        Utility::waitForEnter();
        cout << "Professor Oak: Along the way, you'll capture new Pokemon to strengthen your team. Just remember there's a limit to how many Pokemon you can carry, so choose wisely!\n";
        Utility::waitForEnter();
        cout << "\n" << _player.p_Name << ": Sounds like a walk in the park... right?\n";
        Utility::waitForEnter();
        cout << "Professor Oak: Hah! That's what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let's just say you'll be starting from square one.\n";
        Utility::waitForEnter();
        cout << "\nProfessor Oak: So, what do you say? Are you ready to become the next Pokemon Champion?\n";
        Utility::waitForEnter();
        cout << "\n" << _player.p_Name << ": Ready as I\'ll ever be, Professor!\n";
        Utility::waitForEnter();
        cout << "\nProfessor Oak: That's the spirit! Now, your journey begins...\n";
        Utility::waitForEnter();
        cout << "Professor Oak: But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!\n";
        Utility::waitForEnter();
        Utility::clearConsole();
    }
};

void handleLoopChoices(int _c, bool& keepPLay) {
    switch (_c)
    {
    case 1:
        cout << "Battle wild pokemon really bro you will die just quit???? \n";
        break;
    case 2:
        cout << "No body needs that bro just quit \n";
        break;
    case 3:
        cout << "You will be embarrassed just go sleep bro \n";
        break;
    case 4:
        cout << "Dont even think about it just quit";
        break;
    case 5:
        cout << "Thank god have a great day good bye. I bid you a due, Good bye uuumaah!! and Good night Band!!!";
        keepPLay = false;
        break;
    default:
        cout << "You think you funny huh? \n";
        break;
    }
    Utility::waitForEnter();
}

void gameLoop(Player& _player) {
    
    bool keepPlaying = true;
    int choice;
    while (keepPlaying) {
        Utility::clearConsole();
        cout << "\nWhat would you like to do next, " << _player.p_Name << "?\n";
        cout << "1. Battle Wild Pokémon\n";
        cout << "2. Visit PokeCenter\n";
        cout << "3. Challenge Gyms\n";
        cout << "4. Enter Pokemon League\n";
        cout << "5. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        Utility::waitForEnter();
        handleLoopChoices(choice, keepPlaying);
        //waitForEnter();
    }
    
}


//string player_name;
//int playerChoice;
//int confirmation;
    
int main()
{
    Player player;
    ProfessorOak oak;
    Pokemon placeHolderPokemon;

    player.p_Name = "Trainer";
    oak.name = "Professor Oak";

    oak.greetPlayer(player);
    oak.offerPokemonChoice(player);
    oak.explainMainQuest(player);
    cout << "Good Job " << endl;

    gameLoop(player);
    //    cout << player.p_Name << " has chosen " << player.p_ChosenPokemon.name << " as his first Pokemon";
    return 0;
}
