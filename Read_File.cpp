#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    ifstream readFile;
    readFile.open("marks.txt");
    string line;
    getline(readFile, line);
    string name;
    int score;

    while(readFile >> name >> score){
        cout << left << setw(10) << name << score << endl;
    }
   
    readFile.close();

    return 0;
}