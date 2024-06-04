#include <iostream>
#include <iomanip>
// Question from 2023 CS111 Final Paper

using namespace std;

int main(){
    const int row = 5;
    const int columns = 5;
    int values[row][columns] = 
    {
     2,  4,  6,  4, 18,
    43, 23, 67, 78, 32,
    13, 10, 11, 21, 21, 
    45, 44, 53, 65, 76, 
    34, 43, 43, 99, 84
    };

    // Diagonal Sum
    int diagonal_sum = 0;
    for(int i = 0;i < row; i++)
    {
        cout << values[i][i] << " ";
        diagonal_sum += values[i][i];
    }
    cout << "Diagonal Sum = " << diagonal_sum << endl;

    // Anti Diagonal Sum
    int anti_diagonal_sum = 0;
    int j = 4;
    for(int i = 0; i < row; i++)
    {
        cout << values[j][i] << " ";
        anti_diagonal_sum += values[j][i];
        j--;
    }
    cout << "Anti-Diagonal Sum = " << anti_diagonal_sum << endl;

    // Anti Diagonal Sum 2
    int anti_diagonal_sum2 = 0;
    int b = 0;
    for(int i = 4; i >= 0; i--)
    {
        cout << values[b][i] << " ";
        anti_diagonal_sum2 += values[b][i];
        b++;
    }
    cout << "Anti-Diagonal Sum = " << anti_diagonal_sum2 << endl;
    
    cout << endl;

    for(int k = 0; k < row; k++){
        int row_total = 0;
        for(int m = 0; m < columns;m++){
           cout << setw(4) << values[k][m];
           row_total += values[k][m];
        }
        cout << "= " << row_total;
        cout << endl;
    }

    for(int n = 0; n < columns; n++){
        int col_total = 0;
        for(int k = 0; k < row; k++){
            col_total += values[k][n];
        }
        cout << setw(4) << col_total << " ";

    }
    return 0;
}