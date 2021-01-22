#include <iostream>

using namespace std;
class Game_number
{
private:
    int m_guessNumber;

public:
    int getGuessNumber() {return m_guessNumber;}
    void setGuessNumber();
    int generateNumb();
    friend void check(Game_number& a);
};

