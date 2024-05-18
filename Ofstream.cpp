#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream output;
    output.open("num.txt");
    output << "num" << " "<< "num2" << endl;
    for(int i = 1; i < 10; i++){
        output << i << " "<< i + 1 << endl;;
    }
    output.close();
}