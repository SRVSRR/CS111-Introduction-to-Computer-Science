#include <iostream> 
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    ofstream write_file;
    write_file.open("Number Generation.txt");
    srand(time(0));

    for(int i = 0; i < 20; i++){
        int num = rand() % 6 + 1;
        write_file << num << ", ";
    }
    write_file.close();
    return 0;
}