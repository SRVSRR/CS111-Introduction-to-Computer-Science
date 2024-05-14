#include <iostream> 

using namespace std;

int main(){
    const int MAX = 1000;
    const int MIN = -1000;
    const int CAP = 100;
    double values[CAP] = {1,2,3,4,5,6,7,8,9,10};
    int multiple = 2;

    for(int i = 0; i < CAP; i++){
        cout << "Enter value between 1000 and -1000\n";
        cin >> values[i];
        if(values[i] > MAX ||values[i] < MIN){
            break;
        }
        cout << "Old Array Value: " << values[i] << ". Numbers filled: "<< i+1 << endl;
        values[i] = values[i] * multiple;
        cout << "New Array Value: " << values[i] << endl;
    }


    return 0;
}