#include <iostream>
using namespace std;

    string player_name;
    int playerChoice;
    int confirmation;

    int main() {
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
            break;
        case 2:
            cout << "OAK : So you want Bulbasaur. Are you sure? \n1. Yes\n2. No";
            break;
        case 3:
            cout << "OAK : So you want Squirtle. Are you sure? \n1. Yes\n2. No";
            break;
        default:
            cout << "Invalid choice Bro BYE";
            break;
        }

        return 0;
    }

    /*void ChoosePokemon() {
        cout << "1. Charmender\n2. Bulbasaur\n3. Squirtle";
        cout << "OAK : Choose wisely just Give whichever number you want.";
        cin >> playerChoice;
        if (playerChoice == 1) {
            cout << "OAK : So you want Charmender. Are you sure? \n1. Yes\n2.No";
            Confirmation();
        }
        else if (playerChoice == 2) {
            cout << "OAK : So you want Bulbasaur. Are you sure? \n1. Yes\n2.No";
            Confirmation();
        }
        else if (playerChoice == 3) {
            cout << "OAK : So you want Squirtle. Are you sure? \n1. Yes\n2.No";
            Confirmation();
        }
        else {
            cout << "OAK : Invalid choice choose again bro. Enter 1 , 2 or 3.";
            ChoosePokemon();
            cin >> playerChoice;
        }
    }

    void Confirmation() {
        cin >> confirmation;
        if (confirmation == 1) {
            cout << "You have chosen your first pokemon";
        }
        else if (confirmation == 2) {
            ChoosePokemon();
        }
        else {
            cout << "I am asking you again are you sure?";
            Confirmation();
        }
    }*/
