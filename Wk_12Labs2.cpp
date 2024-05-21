#include <iostream>
#include <fstream>

using namespace std;

double process_array(int content[],int count){
    double sum;
    for(int i = 0; i < count; i++){
        sum = sum + content[i];
    }
    return sum/count;
}

int main(){
    ifstream infile;
    infile.open("data.txt");

    const int CAP = 50;
    int content[CAP];
    int count = 0;
    double sum = 0;
    int num;

    while(infile >> num && count < CAP) {
        content[count] = num; 
        sum += num;
        count++;
    }

    double average = process_array(content, count);
    cout << "The average is: " << average << endl;
    infile.close();
    return 0;
}
