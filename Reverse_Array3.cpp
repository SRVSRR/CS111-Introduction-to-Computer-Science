#include <iostream>

using namespace std;

int main(){
    int values[] = {3, 1, 4, 1, 5, 9};
    const int CAP = 6;
    int mid_way = 3;
    int temp;

    int y = 5;
    for(int i = 0; i < mid_way; i++){
        temp = values[i];
        values[i] = values[y];
        values[y] = temp;
        y--;
    }
    for(int l = 0; l < CAP; l++){
        cout << values[l];
    }
    return 0;
}