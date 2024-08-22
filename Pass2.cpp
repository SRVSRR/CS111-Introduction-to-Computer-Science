#include <iostream>
using namespace std;

int main() {
    const double RATE = 3.5;
    double INITIAL_BALANCE = 10000.0;
    double interest;
    const double TARGET = 2 * INITIAL_BALANCE;
    double balance = INITIAL_BALANCE;
    int year = 0;

    while (balance < TARGET) {
        year++;
        interest = INITIAL_BALANCE * (RATE / 100);
        balance += interest;
    }

    cout << "The investment doubled after " << year << " years." << endl;

    return 0;
}