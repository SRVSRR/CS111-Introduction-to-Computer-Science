#include <iostream>

using namespace std;

int sum(int value[], int CAP){
    int sum = 0;
    for(int i = 0; i < CAP; i++){
        if(value[i] % 2 == 0){
            sum+=value[i];
        }
    }
    return sum;
}

int main(){
    const int CAP = 6;
    int value[CAP] = {2, 7, 9, 23, 65, 66};
    int total = sum(value, CAP);

    cout << total << endl;
    return 0;
}