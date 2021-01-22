#include <iostream>

using namespace std;
class Scoreboard
{
private:
    int m_won;
    int m_rnd;
    string m_name;

public:
    Scoreboard()
    {
        m_name = " ";
        m_won = 0;
        m_rnd = 1;
    }

    string getName() { return m_name; }
    int getWon()     { return m_won; }
    int getRnd()     { return m_rnd; }
    double calc1();
    void round();
    void display();
    void update();
    void rank();
    void initName();
};