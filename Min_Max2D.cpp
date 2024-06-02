#include <iostream>

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
    
    int min = values[0][0];
    int max = values[0][0];
    
    // Max/Min by Rows
    cout << "Max/Min by Rows" << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < columns; j++){
            if(values[i][j] > max){
                max = values[i][j];
            }
            if(values[i][j] < min){
                min = values[i][j];
            }
        }
        cout << "MAX = " << max << endl;
        cout << "MIN = " << min << endl;
    }
    cout <<  endl;

    int minc = values[0][0];
    int maxc = values[0][0];

    // Max/Min by Columns
    cout << "Max/Min by Columns" << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < columns; j++){
            if(values[j][i] > maxc){
                maxc = values[j][i];
            }
            if(values[j][i] < minc){
                minc = values[j][i];
            }
        }
        cout << "MAX = " << maxc << endl;
        cout << "MIN = " << minc << endl;
    }

    return 0;
}