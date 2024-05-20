#include <iostream>
#include <fstream>

using namespace std;

int input_validation(){
    int input;
    cin >> input;
    while(input > 6 || cin.fail() || input < 1){
        cin.clear();
        cout << "Incorrect input. Please use numbers 1-6 only" << endl;
        string dummy;
        cin >> dummy;
        cin >> input;
    }
    return input;
}

void welcome_message(){
    cout << "+----------------------------+\n";
    cout << "|   Welcome to Grade Shower  |\n"; // welcome message
    cout << "+----------------------------+\n";
}

void exit_program(){
    cout << "+----------------------------+\n";
    cout << "| Welcome to Tax Calculators |\n"; // welcome message
    cout << "+----------------------------+\n";
}

int main(){
    welcome_message();
    ifstream output;
    output.open("studentmarks.txt");
    output.close();
    
    ofstream input;
    input.open("summary.txt");
    string index;
    string student_name;

    int choice;
    int list_print = 1;
    int student_details = 2;
    int print_total = 3;
    cout << "Menu" << endl 
         << "1) Print the Entire List" << endl 
         << "2) Print Details of Student Matching a Given ID" << endl
         << "3) Calculate Total and Print Entire List with Total" << endl
         << "4) Print List sorted by Total" << endl
         << "5) Write Report to File" << endl
         << "6) Exit Program" <<  endl
         << "Enter your choice"; 
    choice = input_validation();
    switch(choice){
            case 1: cout << index << student_name;
            case 2: cout << index << student_name;
            case 3: cout << index << student_name;
            case 4: cout << index << student_name;
            case 5: cout << index << student_name;
            case 6: cout << index << student_name;
        }

    input.close();

    exit_program();

    return 0;
}