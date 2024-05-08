#include <iostream>

using namespace std;

int main() {
    int pizza_num;
    cout << "Welcome to Yummy Pizza, we sell medium sized pizzas at $10.50 each \n";
    cout << "How many pizzas would you like?" << endl;
    cin >> pizza_num;

    const double pizza_cost = 10.95;
    double total_cost = pizza_cost * pizza_num;
    cout << "That will be $" << total_cost << endl;

    double cash_paid;
    cout << "Enter your cash amount" << endl;
    cin >> cash_paid;

    double change = cash_paid - total_cost;
    cout << "Your change will be $" << change << endl;
    cout << "Your change denominations will be:" << endl;
    double new_change;
    const int ten_notes = change/10;
    int five_notes = (change - (ten_notes*10))/5;
    int two_notes = (change - (ten_notes*10))/5;
    int one_notes = (change - (ten_notes*10))/5;
    int fifty_coins = (change - (ten_notes*10))/5;
    int twenty_coins = (change - (ten_notes*10))/5;
    int ten_coins = (change - (ten_notes*10))/5;
    int five_coins = (change - (ten_notes*10))/5;

    
    if(change > 20) {
        cout << "Number of $10 Bills: " << ten_notes << endl;
        cout << "Number of $5 Bills: " << five_notes<< endl;;
        cout << "Number of $2 Bills: " << two_notes << endl;
        cout << "Number of $1 Bills: " << one_notes << endl;
        cout << "Number of $0.5 Bills: " << fifty_coins << endl;
        cout << "Number of $0.2 Bills: " << twenty_coins << endl;
        cout << "Number of $0.1 Bills: " << ten_coins << endl;
        cout << "Number of $0.05 Bills: " << five_coins << endl;
    }

    return 0;
}