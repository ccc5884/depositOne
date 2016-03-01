#include <iostream>
using namespace std;

int main() {


unsigned int score = 5000;
cout << "Score: " << score << endl;

score = score + 100;
cout << "Score: " << score << endl;

score += 100;
cout << "Score: " << score << endl;

int lives = 3;
++lives;
cout << "Lives: " << lives << endl;

lives = 3;
lives++;
cout << "Lives: " << lives << endl;

lives = 3;
int bonus = ++lives *10;
cout << "Lives, bonus = " << lives << "." << bonus << endl;

lives = 3;
bonus = lives ++*10;
cout << "lives, bonus = " << lives << "." << bonus << endl;

//largest value it can hold
score = 4294967295;
cout << "Score " << score << endl;
++score;
cout << "Score: " << score << endl;

return 0;
}
