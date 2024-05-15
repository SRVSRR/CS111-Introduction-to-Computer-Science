#include <iostream>

using namespace std;

int max(int value[], int SIZE){
    int high = value[0];
    for(int i = 0; i < SIZE; i++){
        if(high < value[i]){
            high = value[i];
        }
    }
    return high;
}

int min(int value[], int SIZE){
    int low = value[0];
    for(int i = 0; i < SIZE; i++){
        if(low > value[i]){
            low = value[i];
        }
    }
    return low;
}

void range(int max, int min){
    cout << "Range = " << max - min << endl;;
}

int main(){
    const int SIZE = 10;
    int value[SIZE] = {3, 2, 54, 65, 3, 4, 9, 53, 85, 100};

    int highest = max(value,SIZE);
    int lowest = min(value,SIZE);
    cout << lowest << endl;
    cout << highest << endl;

    range(highest, lowest);

    return 0;
}