#include <iostream> 

using namespace std;

void double_up(double values[], int counter){
    for(int i = 0; i < counter; i++){
        values[i] = values[i] * 2;
    }
}

int main(){
    const int CAP = 100;
    int multiple = 2;
    int counter = 0;
    int data = 0;
    double values[CAP] = {1,2,3,4,5,6,7,8,9,10};
    cout << "Enter num to continue or q to stop\n";
    while(cin >> data){
        if(counter < CAP){
            values[counter] = data;
            counter++; 
        }
    }
    double_up(values, counter);
    for(int i = 0; i < counter; i++){
        cout << "Index " << i << ": " << values[i]<< endl;
    }
    
    return 0;
}