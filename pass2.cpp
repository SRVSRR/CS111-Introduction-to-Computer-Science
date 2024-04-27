#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    int tries = 0;
    int guess; 
    srand(time(0));
    int num = rand() % 5 +1;
    const int TRIES_LIMIT = 3;

    while(tries < TRIES_LIMIT){
        cout << "Welcome to random number guessor\n";
        cout << "Enter a number between 1-5\n";
        cin >> guess;
        tries++;
        while(cin.fail()){
            cin.clear();
            string dummy;
            cin >> dummy;
            cout << "Invalid input. Use a number between 1-5\n";
            cin >> num;
        }

        if(guess > num){
            cout << "Too High. Tries taken: " << tries << '\n';
        }else if(guess <  num){
            cout << "Too Low. Tries taken: " << tries << '\n';

        }else{
            cout << "You got it right. Tries taken: " << tries << '\n';
            break;
        }
    }
    if(tries == TRIES_LIMIT){
            cout << "You have exhausted all your tries.\n";
        }
}
