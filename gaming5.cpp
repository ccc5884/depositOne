#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void print(string x) { cout << x << endl;}

int main() {

    srand(static_cast <unsigned int>(time(0)));
    int secretNumber = random()% 100+1;
    int tries = 0;
    int guess;
    string again;

    print("Welcome to Guess My Number");
    do {
do {

    print("Enter a guess: ");
    cin >> guess;
    ++tries;


    if(guess > secretNumber) {
        print("TOO HIGH");
    } else if (guess < secretNumber) {
        print("Too Low");
    } else {
        print("That's it! You got it");
        cout << "It only too you " << tries << " " << "times" << endl;
    }}while(guess != secretNumber);

print("Do you want to play again? y/n");
cin >> again;
tries = 0;
}   while(again == "y");

}
