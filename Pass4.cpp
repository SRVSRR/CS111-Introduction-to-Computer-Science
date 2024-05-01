#include <iostream>
#include <cmath>

using namespace std;

void fizzbuzz(int Max, int MIN, int Fizz, int Buzz){
    for(int x = MIN; x <= Max; x++){
        if(x % Fizz == 0 && x % Buzz == 0){
            cout << x << "FizzBuzz\n";
        }
        else if(x % Fizz == 0){
            cout << x << "Fizz\n";
        }else if(x % Buzz == 0){
            cout << x << "Buzz\n";
        }
    }
}

int main() {
    int Max = 100;
    int MIN = 1;
    int Fizz = 3;
    int Buzz = 7;
    fizzbuzz(Max, MIN, Fizz, Buzz);
    return 0;
}