#include <iostream>
#include <string>
using namespace std;


int main() {

    int score;
    double distance;
    char playAgain;
    bool shieldsUp;

    short lives.aliensKilled;

    score = 0;
    distance = 1200.76;
    playAgain = 'y';
    shieldsUp = true;
    lives = 3;
    aliensKilled = 10;

    double engineTemp = 6572.89;

    cout << "Score: " << score << endl;
    cout << "Distance: " << distance << endl;
    cout << "Play Again: " << playAgain << endl;
    cout << "Lives: " << lives << endl;
    cout << "Aliens Killed: " << aliensKilled << endl;
    cout << "Engine Temp: " << engineTemp << endl;

    int fuel;
    cout << "How much fuel? ";
    cin >> fuel;
    cout << "Fuel: " << fuel << endl;

    // short = reduces the amount of nmbers a variable can old
    // signed && unsigned only work with int
    //signed = varibale can store both positve and negative values
    //unsigned = means variable can only store POSTIVE values
    //signed is the default value of ALL ints.

    typedef unsigned short int ushort;
    ushort bonus = 10;
    cout << "Bonus " << bonus << endl;

    return 0;
    }

}
