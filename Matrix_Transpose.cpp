#include <iostream>
#include <iomanip>

using namespace std;

void PrintMatrix(int values[][5], int ROWS, int COLUMNS){
    cout << "Normal Matrix" << endl;
    for(int i = 0; i < ROWS; i++){
        for(int y = 0; y <COLUMNS; y++){
            cout << setw(3) << values[i][y] << " ";
        }
        cout <<  endl;
    }
    cout << endl;
    cout << "Transposed Matrix" << endl;
    for(int i = 0; i < ROWS; i++){
        for(int y = 0; y <COLUMNS; y++){
            cout << setw(3) << values[y][i] << " ";
        }
        cout <<  endl;
    }
}

int main(){
    const int ROWS = 5;
    const int COLUMNS = 5;
    int values[ROWS][COLUMNS] = {
        1, 2, 3, 4, 5,
        6, 7, 8, 9, 10, 
        11, 12, 13, 14, 15, 
        16, 17, 18, 19, 20, 
        21, 22, 23, 24, 25
    };

    PrintMatrix(values, ROWS, COLUMNS);
   
}