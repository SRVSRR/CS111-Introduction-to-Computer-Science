#include <iostream>

using namespace std;

double area(double side_length){
    double A = side_length * side_length;
    return A;
}

int main(){
    double side_length = 2;
    double A = area(side_length);

    cout << A << endl;

    return 0;
}
