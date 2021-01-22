#include <iostream>
#include "scoreboard.h"
#include <ctime>

using namespace std;

void init()
{
    cout.width(60);
    cout << "Welcome to my Guessing Game!" << endl;
    cout << "Game Tips:" << endl;
    cout << "For each round, You have 10 chances to guess a number between" << endl;
    cout << "1 and 100 inclusive. There are some hints along the game." << endl;
    cout << "Read them carefully to achieve victory." << endl;
    cout << "At the end every one round yours actually statistics will be displayed." << endl;
    srand(time(0));
}

void main_menu()
{
    char choice;
    cout.width(50);
    cout << endl << endl << "MAIN MENU" << endl << endl;
    cout << "Press key 'x' to exit program" << endl;
    cout << "Press any other key to continue and begin new game" << endl;
    cout << "Please choose your choice: ";
    cin >> choice;
    if ((choice == 'x') || (choice == 'X')) {
        exit(1);
    }
    else
    {
        system("cls");
        cout << "Everything is almost ready";
        cout << endl << "Please enter your name and the game will start!" << endl;
    }
}