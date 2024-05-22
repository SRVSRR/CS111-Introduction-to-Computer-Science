#include <iostream>

using namespace std;

void reverse(int values[], int CAP){
    int i = 0;
    int j = 4; 
    while(i < CAP){
        int temp = values[i];
        values[i] = values[j];
        values[j] = temp;
        cout << values[i];
        i++;
        j--;
    }
}

int main(){
    const int CAP = 5;
    int values[CAP] = {1, 2, 3, 4, 5}; 
    for(int i = 0; i < CAP; i++){
        cout << values[i];
    }
    reverse(values, CAP);

    return 0;
}