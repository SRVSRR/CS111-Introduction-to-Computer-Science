#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream input;
    input.open("num.txt");
    ofstream output;
    output.open("sum.txt");

    string header;
    getline(input, header); // read and ignore the header line

    string header1;
    getline(input, header1); 

    string header2;
    getline(input, header2); 

    output << header << endl; 
    output << header1 << endl;
    output << header2 << endl;

    int num1, num2;
    int sum = 0;    
    
    while (input >> num1 >> num2){
        sum += num1;
        output << num1 << " " << num2 << endl;
    }

    input.close();

    // Write the sum
    output << "\nThe sum of the first column is: " << sum << endl;

    output.close();

    return 0;
}
