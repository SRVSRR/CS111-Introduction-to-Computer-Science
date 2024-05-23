#include <iostream>

using namespace std;

void reverse(int values[], int SIZE, int newarray[]){
    int temp = values[0];
    int i = 4;
    int y = 0;
    while(SIZE > y){
        newarray[y] = values[i];
        y++;
        i--;
    }
    newarray[SIZE - 1] = temp;
}

int main(){
    const int CAP = 5;
    int values[CAP] = {1, 2, 3, 4, 5}; 
    int newarray[CAP];
    
    reverse(values, CAP, newarray);

    for(int i = 0; i < CAP; i++){
        cout << newarray[i];
    }

    return 0;
}