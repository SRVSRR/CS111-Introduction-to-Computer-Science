#include <iostream>

// From leetcode 

using namespace std;

void start_stop(bool &execute_code){
    char user_decision;
	cout << "Enter S to start or Q to quit" << endl;
	cin >> user_decision;
	
	while(user_decision != 'S' && user_decision != 's' && user_decision != 'Q' && user_decision != 'q')
	{
		cin.clear();
		string dummy;
		cin >> dummy;
		cout << "ERROR!, invalid input was detected" << endl;
		cout << "Please enter either \"S\" or \"Q\" only" << endl;
		cin >> user_decision;
	}
	
	if (user_decision == 'S' || user_decision == 's')
	{
		execute_code = true;
	}
	
	else if (user_decision == 'Q' || user_decision == 'q')
	{
		execute_code = false;
	}
}

int main(){
    int counter = 0;
    int values[counter];
    int input;
    bool found = false;

    bool continue_running;

    start_stop(continue_running);

    while(continue_running){
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
        char quit;

        int target;
        cout << "Enter target" << endl;
        cin >> target;

        while(i < counter || y < i){
            if(values[i] + values[y] == target){
                cout << "target found index: " << i << " and index: " << y;
                found = true;
                break;
            }
            else if(values[i] + values[y] > target){
                y--;
            }
            else if(values[i] + values[y] < target){
                i++;
            }
        }

        if(!found){
            cout << "Target not found" << endl;
        }

        cout << "Enter q to quit program" << endl;
        cin >> quit;
        if(quit == 'q'){
            break;
        }
    }

    

    return 0;
}