#include <iostream>

using namespace std;

int main() {

    int i = 9;

    for(int i = 1; i <= 4; i++){
        for(int j = 4; j >= i ; j--){
            cout << "*" ;
        }
        cout << "\n";
    }

    return 0;
}