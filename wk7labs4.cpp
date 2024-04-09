#include <iostream>

using namespace std;

int main() {

    int i = 9;

    for(int i = 0; i < 4; i ++){
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}