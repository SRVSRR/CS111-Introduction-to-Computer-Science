#include <iostream>

using namespace std;

int main(){
    const int CAP = 5;
    int A[CAP];
    int Max = A[0],  Min = A[0] ;
    for(int y = 0; y < CAP; y++){
        cin >> A[y];
    }
    for(int i = 0; i < CAP; i++){
        if(Max < A[i]){
            Max=A[i];
        }
        if(Min > A[i]){
            Min=A[i];
        }
        cout << "Input" << i << " = " << A[i] << endl;
    }
    cout << "Max: " <<  Max << endl;
    cout << "Min:" << Min << endl;

}