#include <iostream>

using namespace std;

int main(){
    string name;
    
    int mobile_number;
    
    string email_address;

    cout << "What is your name?" << endl;
    cin >> name;
    cout << "What is your mobile phone number" << endl;
    cin >> mobile_number;
    cout << "Please enter your email address \n";
    cin >> email_address;

    cout << "Your name is " << name << ", your mobile number is" << mobile_number << "and email address is " << email_address << '\n'; 

    return 0; 
}
