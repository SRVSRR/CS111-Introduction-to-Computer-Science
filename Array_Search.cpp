#include <iostream>

using namespace std;

int max(int value[], int CAP){
    int max = value[0];
    for(int i = 0; i <  CAP; i++){
        if(max < value[i] ){
        }
    }
    return max;
}

int main(){
    const int CAP = 6;
    int value[CAP] = {1, 5, 7, 3, 10, 4};

    int highest = max(value, CAP);

    cout << highest;

    return 0;
}