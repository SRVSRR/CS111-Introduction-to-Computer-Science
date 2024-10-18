#include <iostream>
#include <iomanip>

using namespace std;

double avg(int value[], int SIZE);

int main(){
    cout << fixed << setprecision(1);
    const int SIZE = 5;
    int values[SIZE] = {1, 2, 3, 4, 5};

    double average = avg(values, SIZE);

    cout << average << endl;    
    return 0;
}

double avg(int value[], int SIZE){
    double sum = 0;
    for(int i = 0; i < SIZE; i++){
        sum+=value[i];
    }
    double average = sum/SIZE;
    return average;
}
