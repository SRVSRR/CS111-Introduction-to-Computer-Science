#include <iostream>
// Question from 2023 CS111 Final Paper
// Find for straight columns

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
    return 0;
}