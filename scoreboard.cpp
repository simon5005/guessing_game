#include <iostream>
#include <string> // Needed to use strings
#include <cstdlib> // Needed to use random numbers
#include <ctime>
#include <string.h>
#include <stdio.h>
#include <map>
#include "scoreboard.h"
#include "main.h"

using namespace std;
map <string, int> ranking;

 double Scoreboard::calc1()
{
    return (m_won * 100.0) / m_rnd;
}

void Scoreboard::initName()
{
    cout << "Name: ";
    cin >> m_name;
    system("cls");
}

void Scoreboard::rank() 
{
    cout.width(40);
    cout << "Game Scoreboard" << endl;
    ranking[m_name] = (m_won * 100.0) / (double(m_rnd) - 1);
    cout << "Name";
    cout.width(35);
    cout << "Percentage of winnings" << endl;

    for (auto it : ranking)
    {   
        cout << it.first;
        cout.width(20);
        cout << it.second << "%" << endl;
    } 
}

void Scoreboard::update()
{
    if (exitnow == true)
    {
        m_won = 0;
    }
    if (Win == true)
        m_won++;
}

void Scoreboard::round()
{
    if (exitnow == true)
    {
        m_rnd = 0;
        m_rnd++;
    }
    cout << "[Round " << m_rnd << "]" << " Player: " << m_name << endl;    // counting the number of Rounds 
}

void Scoreboard::display()

{
    cout << endl << "=============================================================================================" ;
    cout << endl << "Statistic of " << m_name << " after " << m_rnd << " rounds played";
    cout << endl << "Win: " << m_won << " of total " << m_rnd << " rounds";
    cout << endl << "Percent win: " << calc1() << "%" << endl;
    cout << "=============================================================================================\n";

    if (m_won == 0)
    {
        cout << "You are unlucky! None of your game were win" << endl;
    }
    m_rnd++;
}
