#include <iostream>

using namespace std;

int main() {

    int speed;
    char drunk;

    cout << "Speeding" << endl;
    cin >> speed;
    cout << "Drunk? (Y/N)" << endl;
    cin >> drunk;

    const int nor_speed = 60;
    const int hi_speed = 70;
    int lim = hi_speed - nor_speed;
    int over_norm = nor_speed - speed;
    int over_high = hi_speed - speed; 
    int fee_sixty = over_norm * 5;
    int drunk_fee = 7 * over_norm;
    int fee_seventy = over_high * 15;
    int total = drunk_fee + fee_sixty;

    if(speed < 65 && speed > 60 && drunk == 'Y'){
        cout <<"Warning + tell to take shower" << endl;

    } else if(speed < 65 && speed > 60) {
        cout << "Warning " << endl;

    } else if(speed >= 65 && speed <= 70 && drunk == 'Y'){
        cout << "$7 fee for each km/hr over 60 + shower : $"<< drunk_fee << endl;

    } else if(speed >= 65 && speed <= 70){
        cout << "$5 fee for each km/hr over 60: $" << fee_sixty << endl;

    } else if(speed > 70 && drunk == 'Y'){
        cout << "$7 fee for each km/hr over 60 & & 15 for over 70km/hr & night in jail: $" << ((hi_speed - nor_speed) * 7) + ((speed - hi_speed) * 15) << endl;

    } else if(speed > 70){
        cout << "$5 fee for each km/hr over 60 & $15 for km/hr over : $" << ((hi_speed - nor_speed) * 5) + ((speed - hi_speed) * 15)<< endl;

    } 

    return 0;
}