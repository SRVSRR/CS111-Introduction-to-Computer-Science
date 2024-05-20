#include <iostream>

using namespace std;

int main(){
const int CAP = 50;
string names[CAP] = {
    "John", "Mary", "James", "Patricia", "Robert", "Jennifer", 
    "Michael", "Linda", "William", "Elizabeth", "David", "Barbara", 
    "Richard", "Susan", "Joseph", "Jessica", "Charles", "Sarah", 
    "Thomas", "Karen", "Christopher", "Nancy", "Daniel", "Lisa", 
    "Matthew", "Margaret", "Anthony", "Sandra", "Donald", "Ashley", 
    "Paul", "Kimberly", "Mark", "Emily", "George", "Donna", 
    "Steven", "Michelle", "Kenneth", "Carol", "Andrew", "Amanda", 
    "Joshua", "Melissa", "Kevin", "Deborah", "Brian", "Stephanie", 
    "Edward", "Rebecca"
};
string query;
char sentinel;
int counter = 0;
bool found;

while(sentinel != 'q'){
    cout << "Enter Name" << endl;
    cin >> query;
    found = false;
    int i = 0;
    for(int i = 0; i < CAP; i++){
        if(query == names[i]){
            cout << "The name " << query << " does exist at position " << i+1 << endl;
            counter++;
            found = true;
        }
    }
    if(!found){
        cout << "The name " << query << " does not exist" << endl;
    }
    cout << "Do you wish to quit? Enter q to quit" << endl;
    cin >> sentinel;
}
cout << "You have left the loop and guessed " << counter << " name correct" << endl;

return 0;
}