#include <iostream>

using namespace std;

int main(){
    int x;
    int y;

    cout << "Enter a value for x: " << endl;
    cin >> x;
    cout << "Enter a value for y: " << endl;
    cin >> y;
    int z = x * y * (y+x);
    cout << "Z is equal to " << z << endl;
    


    return 0;
}
