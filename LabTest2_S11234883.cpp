#include <iostream>

using namespace std;

//validation for destination choice
int destination_validation(){
    int input;
    cin >> input;
    const int MAX_CHOICE = 4; // choices exist only between 1 and 4
    const int MIN_CHOICE = 1;

    while(input < MIN_CHOICE || cin.fail() || input > MAX_CHOICE){ 
        cin.clear();
        string dummy;
        cin >> dummy;
        cout << "Incorrect input. Use choices 1 to 4" << endl; 
        cin >> input; // cin til choice is between MAX_CHOICE and MIN_CHOICE and is a integer
    }
    return input; //  return the input back into main function
}

// input validation for number of items ordered
int vehicleNum_validation(){ 
    int vehicle_num;
    cin >> vehicle_num;
    const int MIN_CARS = 1; // items ordered can not be below 1

    while(vehicle_num < MIN_CARS || cin.fail()){
        cin.clear();
        string dummy;
        cin >> dummy;
        cout << "Incorrect input. Orders must be more than or equal to 1" << endl;
        cin >> vehicle_num;
    }
    return vehicle_num;
}

// Function to start or quit the program
void program_start_quit(bool& continue_executing)
{
    string userDecision;
    cout << "Enter S to start or Q to quit" << endl;
    cin >> userDecision;
    
    while(userDecision != "S" && userDecision != "s" && userDecision != "Q" && userDecision != "q") {
        cin.clear();
        cout << "ERROR! Invalid input detected." << endl;
        cout << "Please enter either \"S\" or \"Q\" only." << endl;
        cin >> userDecision;
    }
    
    if (userDecision == "S" || userDecision == "s")
	{
		continue_executing = true;
	}
	else if (userDecision == "Q" || userDecision == "q")
	{
		continue_executing = false;
	}
}

int main(){
    const char LOWERCASE_SENTINEL = 'q';
    const char UPPERCASE_SENTINEL = 'Q';
    char quit;
    // welcome message 
    cout << "+++++++++++++++++++++++++++++++++++++" << endl;
    cout << "| Welcome To Trinidy Car Dealership |" << endl;
    cout << "+++++++++++++++++++++++++++++++++++++" << endl;

    int total_vehicles = 0;
    int total_pricing = 0;

    bool continue_executing = true;
    program_start_quit(continue_executing);

    while(continue_executing){

        int destination_choice;
        int num_vehicles;
        int total_cost = 0; // set total to 0 to avoid random assignment

        // Display destinations along with prices to user
        cout << "Which destination would you like to ship to? Enter choices 1 to 4" << endl
             << "1) Fiji:       $2990" << endl
             << "2) Australia:  $3090" << endl
             << "3) Tonga:      $5340" << endl
             << "4) Japan:      $4990" << endl;

        destination_choice = destination_validation(); // call back the function for validation

        cout << "How many vehicles do you wish to order to your destination? Use numbers only" << endl;
        num_vehicles = vehicleNum_validation(); // call back the function for validation 

        //Constants for prices of destinations
        const int FIJI_PRICE = 2990; 
        const int AUSTRALIA_PRICE = 3090;
        const int TONGA_PRICE = 5340;
        const int JAPAN_PRICE = 4990;

        // if/else statement for which destination was chosen and calculate total cost
        if(destination_choice == 1)
        {
            total_cost = FIJI_PRICE * num_vehicles;
            cout << "Your desired destination is " << destination_choice << ": Fiji" << endl;
        }
        else if(destination_choice == 2)
        {
            total_cost = AUSTRALIA_PRICE * num_vehicles;
            cout << "Your desired destination is " << destination_choice << ": Australia" << endl;
        }
        else if(destination_choice == 3)
        {
            total_cost = TONGA_PRICE * num_vehicles;
            cout << "Your desired destination is " << destination_choice << ": Tonga" << endl;
        }
        else // no condition for last statement required since input has been validated to be within 1 - 4
        {
            total_cost = JAPAN_PRICE * num_vehicles;
            cout << "Your desired destination is " << destination_choice << ": Japan" << endl;
        } 

        cout << "The number of vehicles ordered are :" << num_vehicles << endl;
        cout << "Total cost for " << num_vehicles << " items will be $" << total_cost << endl;
        total_pricing += total_cost;
        total_vehicles += num_vehicles;

        // input for sentinel loop which exits the loop
        cout << "If you wish to leave the program enter q or any other letter to restart" << endl;
        cin >> quit;
        if(quit == 'Q' || quit == 'q'){
            break;
        }
    }

    // program exited message
    cout << "+++++++++++++++++++++++++++++++++++++" << endl;
    cout << "|     You have left the program     |" << endl;
    cout << "+++++++++++++++++++++++++++++++++++++" << endl;

    cout << "Total vehicles ordered: " << total_vehicles << endl;
    cout << "Total cost for vehicles: " << total_pricing << endl;

}