#include <iostream>
#include <string> 
#include <cstdlib> 
#include <ctime>
#include <string.h>
#include <stdio.h>
#include "game_number.h"
#include "main.h"
using namespace std;

void Game_number::setGuessNumber()
{
    do {
        cout << "\nGuess your number between 1 to 100: ";
        while (!(cin >> m_guessNumber) || !isspace(cin.peek())) {
            cout << "Please re-enter number\n";
            cout << "\nGuess your number between 1 to 100: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }
        if (m_guessNumber <= 0 || m_guessNumber > 100)
            cout << "Please check number! It must be number between 1 to 100\n"
            << "Re-enter the number\n";
    } while ((m_guessNumber <= 0 || m_guessNumber > 100));

}

int Game_number::generateNumb()
{
    return rand() % 100 + 1;
}

void check(Game_number& a) {
    int probe = 1;
    int generate = a.generateNumb();
    do {
        a.setGuessNumber();
        if (generate == a.getGuessNumber()) {
            Win = true;
            cout << "Correct!" << endl;
            cout << "You got it in " << probe << " guesses\n";
        }
        else if (generate > a.getGuessNumber())
        {
            cout << "Your estimate is less, than the secret number" << endl;
            if (probe < 10)
                cout << "You have " << 10 - probe << " guesses left\n";
        }
        else {

            cout << "Your estimate is more, than the secret number" << endl;
            if (probe < 10)
                cout << "You have " << 10 - probe << " guesses left\n";
        }
        if (probe == 10 && generate != a.getGuessNumber())
        {
            cout << "You used all the changes" << endl;
            cout << "Correct number: " << generate << endl;
            Win = false;
        }
        probe++;
    } while (generate != a.getGuessNumber() && (probe < 11));
}