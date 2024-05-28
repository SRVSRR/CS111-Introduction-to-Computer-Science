#include <iostream>

// From leetcode 

using namespace std;

int main(){
    int counter = 0;
    int values[counter];
    int input;
    bool found;

    int target;
    cout << "Enter target" << endl;
    cin >> target;

    cout << "Enter numbers into array" << endl;
    while(cin >> input){
        cout << "Enter number or letter to quit" << endl;
        while(cin.fail()){
            cin.clear();
            string temp;
            cin >>  temp;
            cin >> input;
        }
        if(input == 0){
            break;
        } 
        values[counter] = input;
        counter++;
    }

    int i = 0;
    int y = counter - 1;
    found = false;

    while(i < counter || y < i){
        if(values[i] + values[y] == target){
            cout << "target found index: " << i << " and index: " << y;
            found = true;
            break;
        }
        else if(values[i]+values[y] > target){
            y--;
        }
        else{
            i++;
        }
    }

    if(!found){
        cout << "Target not found" << endl;
    }

    return 0;
}