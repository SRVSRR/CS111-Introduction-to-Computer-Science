#include <iostream>

using namespace std;

void reverse(int values[], int CAP){
    int y = 5;
    for(int i = 0; i < CAP; i++){
        int temp = values[i];
        values[i] = values[y];
        values[y] = temp;
        y--;
    }
}

int main(){
    const int CAP = 3;
    int values[] = {1, 2, 3, 4, 5, 6}; 
    
    reverse(values, CAP);

    for(int i = 0; i < 6; i++){
        cout << values[i];
    }

    return 0;
}