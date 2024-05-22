#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    ofstream writeFile;
    writeFile.open("marks.txt");
    
    writeFile << "Names" << setw(10) << "Score" << endl
              << "Jone" << setw(10) << "100" << endl
              << "Mere" << setw(9) << "90" << endl
              << "Sarah" << setw(8) << "95" << endl;
    
    writeFile.close();

    return 0;
}