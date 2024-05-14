#include <iostream> 

using namespace std;

int main(){
    const int CAP = 10;
    double values[CAP] = {1,2,3,4,5,6,7,8,9,10};
    double sum = 0;
    double product = 1;
    double average = 0;

    for(int i = 0; i < CAP; i++){
        sum += values[i];
        product *= values[i];
        average = sum / CAP;
    }

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "Average: " << average << endl;


    return 0;
}