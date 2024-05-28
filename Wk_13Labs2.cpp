#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    const int ROWS = 4;
    const int COLUMNS = 7;
    int total = 0;

    string locations[ROWS] = {"Nasese", "Raiwai", "Raiwaqa", "Vatuwaqa"};

    int bus_num[ROWS][COLUMNS] = {
        34, 33, 31, 35, 36, 23, 20,
        27, 28, 26, 29, 30, 18, 17,
        37, 35, 33, 35, 38, 35, 34,
        22, 24, 23, 25, 27, 26, 26
    };
    cout << setw(14) << "Mon" << setw(6) << "Tue"<< setw(6) << "Wed" << setw(6) << "Thu" << setw(6)<< "Fri" << setw(6)<< "Sat"<< setw(6) << "Sun" << setw(8) << "Total"<< endl;
    for(int y = 0; y < ROWS; y++)
    {
        int sum = 0;
        cout << left << setw(10) << locations[y] << " ";
        for(int i = 0; i < COLUMNS; i++)
        {
            cout << setw(5)<< bus_num[y][i] << " ";
            sum += bus_num[y][i];
        }
        total += sum;
        cout << sum << endl;
    }

    cout << endl;
    cout << "The weekly total for all routes is " << total;
    return 0;
}