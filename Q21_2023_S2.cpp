#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    bool play_again = true;
    while(play_again){
        int num = rand() % 100 + 1;
        int num_guess;
        int guess = 0;
        int tries = 4;
        bool found = false;

        cout << "Welcome to the Random Number Guessing Game\n";
        cout << "You have four attepts to guess the correct number" << endl;

        for(guess = 0; guess < tries; guess++){
            cout << "Guess a number between 1 and 100 (" << tries - guess << " attempts left): "; 
            cin >> num_guess;
            if(num_guess > num){
                cout << "Your guess is too high" << endl; 
            }else if(num_guess < num){
                cout << "Your guess is too low" << endl;
            }else if(num_guess == num){
                found = true;
                cout << "You've guessed it!" << endl;
                break;
            }
        }
        if(!found){
            cout << "Sorry, you didn't guess the number. The secret number was " << num << endl;
        }

        char repeat;
        cout << "Do you want to play again (y/n)" << endl;
        cin >> repeat;
        if(repeat == 'Y' || repeat == 'y'){
            play_again = true;
        }else if(repeat == 'N' || repeat == 'n'){
            play_again = false;
        }
    }
    return 0;
}