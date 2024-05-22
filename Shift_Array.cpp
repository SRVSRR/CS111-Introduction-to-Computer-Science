#include <iostream>

using namespace std;

void shift(int value[], int SIZE, int values[]){
    int temp = value[SIZE-1];
    int i = 0;
    int y = 1;
    while(SIZE > y){
        values[y] = value[i];
        y++;
        i++;
    }
    values[0] = temp;
}

int main(){
    const int SIZE = 6;
    int value[SIZE] = {1, 2, 3, 4, 5, 6};
    int values[SIZE];

    shift(value, SIZE, values);
    for(int i = 0; i < SIZE; i++){
        cout << values[i] << " ";
    }
    return 0;
}