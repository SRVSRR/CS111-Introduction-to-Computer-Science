#include <iostream>

using namespace std;

void odd(int values[], int CAP, int newarray[], int counter){
    for(int i = 0; i < CAP; i++){
        if(values[i]%2 != 0){
            newarray[counter] = values[i];
            cout << newarray[counter] <<  endl;
            counter++; 
        }
    }
}

int main(){
    const int CAP = 6;
    int values[CAP] = { 1, 2, 3, 4, 5, 7};
    int counter = 0;
    int newarray[counter];

    odd(values, CAP, newarray, counter);
    return 0;
}