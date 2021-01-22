#include <iostream>
#include <string> 
#include <cstdlib> 
#include <ctime>
#include <string.h>
#include <stdio.h>
#include "game_number.h"
#include "scoreboard.h"
#include "menu.h"
using namespace std;

int i = 0;
bool Win = false;
bool exitnow = false;

int main()
{
    char choice;
    Game_number game;
    Scoreboard player;
    init();

    do {
        main_menu();
        player.initName();
        do {
            player.round();
            check(game);
            player.update();
            player.display();

            cout << "\nDo you want to play next round? " << endl;
            cout << "Please input y(YES) or n(NO): "; 
            while (!(cin >> choice) || (!(tolower(choice) == 'y' || tolower(choice) == 'n')))
            {
                cout << "Enter 'y' or 'n'" << endl;
            }
            if (tolower(choice) == 'n')
            {
                exitnow = true;
            }
            else
            {
                exitnow = false;
            }
            system("cls");

        } while (tolower(choice) == 'y');
        player.rank();
    } while (exitnow);

}
