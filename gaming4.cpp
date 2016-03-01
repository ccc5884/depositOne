#include <iostream>
#include <string>
using namespace std;

//void print(string x) {cout << x << endl;}
//
//string playAgain;

//int main() {
//
//    print("Do you want to play again?");
//
//    getline(cin, playAgain);
//
//    while(playAgain == "yes") {
//        print("Playing game");
//        print("Do you want to play again?");
//        getline(cin, playAgain);
//        }
//
//        print("We are no longer playing");
//
//return 0;
//}

int main() {
    int count = 0;

    while(true) {
        count += 1;
        if(count > 10) {
            break;
        }
        if (count == 5) {
            continue;
        }
        cout << count << endl;
    }


}
