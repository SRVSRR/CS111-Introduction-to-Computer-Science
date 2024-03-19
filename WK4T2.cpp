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

    int ten_dom = 1000;
    int five_dom = 500;
    int two_dom = 200;
    int one_dom = 100;
    int fifty_dom = 50;
    int twenty_dom = 20;
    int ten_cdom = 10;
    int five_cdom = 05;

    change = change * 100;

    int ten_notes = change/ten_dom;
    change = change - (ten_dom * ten_notes);

    int five_notes = change/five_dom;
    change = change - (five_dom * five_notes);
    
    int two_notes = change/two_dom;
    change = change - (two_dom * two_notes);
    
    int one_notes = change/one_dom;
    change = change - (one_dom * one_notes);
    
    int fifty_cents = change/fifty_dom;
    change = change - (fifty_dom * fifty_cents);
    
    int twenty_cents = change/twenty_dom;
    change = change - (twenty_dom * twenty_cents);
    
    int ten_cents = change/ten_cdom;
    change = change - (ten_cdom * ten_cents);
    
    int five_cents = change/five_cdom;
    change = change - (five_cdom * five_cents);

    cout <<"Number of $10 Bills: " << ten_notes << endl;
    cout <<"Number of $5 Bills: "<< five_notes << endl;
    cout <<"Number of $2 Bills: "<< two_notes << endl;
    cout <<"Number of $1 Bills: "<< one_notes << endl;
    cout <<"Number of $.50 ents: "<< fifty_cents << endl;
    cout <<"Number of $.20 Cents: "<< twenty_cents << endl;
    cout <<"Number of $.10 Cents: "<< ten_cents << endl;
    cout <<"Number of $.05 Cents: "<< five_cents << endl;
        
    return 0;
}