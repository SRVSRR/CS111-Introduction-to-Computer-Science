#include <iostream>
using namespace std;

int main() {
    int postive = 0;
    int negative = 0;
    const int pos_range = 100;
    const int neg_range = -100;
    int sentinel = -999;

    double i;

    cout << "Enter a number" << endl;
    cin >> i;

    while(i != sentinel){
        if(i <= pos_range && i >= neg_range){
            if(i < 0){
                cout << negative++ << endl;
            }else{
                cout << postive++ << endl;
            }
        }else{
            cout << "Invalid Input" << endl;
        }
            cin >> i;
    }

    cout << "Postives = " << postive << endl;
    cout << "Negatives = " << negative <<  endl;

    return 0;
}