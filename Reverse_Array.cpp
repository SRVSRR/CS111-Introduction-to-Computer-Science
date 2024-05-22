#include <iostream>

using namespace std;

void reverse(int values[], int CAP){
    int i = 0;
    int j = 4; 
    while (i < j) {
        int temp = values[i];
        values[i] = values[j];
        values[j] = temp;
        i++;
        j--;
    }
}

int main(){
    const int CAP = 5;
    int values[CAP] = {1, 2, 3, 4, 5}; 
    
    reverse(values, CAP);

    for(int i = 0; i < CAP; i++){
        cout << values[i];
    }

    return 0;
}