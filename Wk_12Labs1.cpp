#include <iostream> 
#include <fstream>

using namespace std;

int main(){
    ofstream output;
    output.open("data.txt");
    for(int i = 1; i <= 50; i++){
        int even = 2 * i;
        output << even << " ";
    }
    output.close();
    return 0;
}