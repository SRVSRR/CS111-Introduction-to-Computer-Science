#include <iostream>
using namespace std;
int main() {
    const double RATE = 3.5;
    const double INITIAL_BALANCE = 10000;
    double interest;
    double balance = INITIAL_BALANCE;
    for (int year = 1; year <= 29; year++) {
        interest = INITIAL_BALANCE * (RATE / 100);
        balance += interest;
        cout << "Year " << year << ": " << balance << endl;
    }
    return 0;
}
