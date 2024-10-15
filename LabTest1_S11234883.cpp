#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int input_check(){ // sessions input validation
    int input;
    cin >> input;
    while(input < 1 || cin.fail())// cin.fail
        { 
            cin.clear();
            string dummy;
            cin >> dummy;
            cout << "Incorrect Input. Sessions MUST be a number and GREATER than 0\n";
            cin >> input;
        }
    return input;
}

char Equipment_Rental_Ans(){ // y/n input validation
    char equipment_rental;
    cin >> equipment_rental;
    while(equipment_rental != 'Y' && equipment_rental != 'y' && equipment_rental != 'N' && equipment_rental != 'n'){
        cout << "Please only enter Y, y, N or n \n"; 
        cin >> equipment_rental;
    }
    return equipment_rental;
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
    int sessions; // sessions to 0 to avoid random assignment
    int rate_per_session;
    char equipment_rental; // input validation for equipment
    int equipment_rental_cost = 20; // cost of equipment rental
    double session_duration = 60; // duration for each session
    int customer_counter = 0; // track customer count
    int earning = 0;
    int duration = sessions * session_duration; // Total Duration of sessions

    int sentinel; // user input to stop program
    const int QUIT = 11234883;

    bool continue_executing = true;

    program_start_quit(continue_executing);

    while(continue_executing){
        cout << "------------------------------------\n";
        cout << "Welcome to Fitness Training Services\n";
        cout << "------------------------------------\n";
        cout << "Please enter the number of sessions you would like to take, the duration of each session is 60 mins;\n";
        sessions = input_check();
        customer_counter++;

        const int SESSION_1MIN = 1;   // declare and initialize constants for session limits
        const int SESSION_1MAX = 5;   
        const int SESSION_2MIN = 6;   
        const int SESSION_2MAX = 10;   
        const int SESSION_3MIN = 11;

        const int RATE_PER_SESSION1 = 30; //declare and initialize constants for session rate costs
        const int RATE_PER_SESSION2 = 25;  
        const int RATE_PER_SESSION3 = 20; 

        int overlim1 = sessions - SESSION_1MAX;
        int overlim2 = SESSION_2MAX - SESSION_1MAX;
        int overlim3 = sessions - SESSION_2MAX;

        int total_cost1 =  sessions * RATE_PER_SESSION2; // assignments inside while loop 
        int total_cost2 =  overlim1 * RATE_PER_SESSION2;
        int total_cost3 =  overlim3 * RATE_PER_SESSION3;

        if(sessions >= SESSION_1MIN && sessions < SESSION_2MIN)
        {
            cout << "That will be $" << total_cost1 << " for the sessions and total duration will be "<< duration << " minutes.\n";

            cout << "Would you like include equipment rental at $20 (Y/N)\n";
            equipment_rental = Equipment_Rental_Ans();

            if(equipment_rental == 'N' || equipment_rental == 'n' )
            {
                earning += total_cost1;
                cout << "Total cost will be $" << total_cost1  <<  endl;
            }
            else if(equipment_rental == 'Y' || equipment_rental == 'y')
            {
                earning += total_cost1 + equipment_rental_cost;
                cout << "Total cost will be $" << total_cost1 + equipment_rental_cost <<  endl;
            }
        }
        else if(sessions >= SESSION_2MIN && sessions <= SESSION_2MAX ){
            cout << "That will be $" << total_cost2 + (SESSION_1MAX * RATE_PER_SESSION1) << " for the sessions and the total duration will be "<< duration << " minutes.\n";

            cout << "Would you like include equipment rental at $20 (Y/N)\n";
            equipment_rental = Equipment_Rental_Ans();

            if(equipment_rental == 'Y' || equipment_rental == 'y')
            {
                earning += total_cost2 + equipment_rental_cost + SESSION_1MAX * RATE_PER_SESSION1;
                cout << "Total cost will be $" << total_cost2 + equipment_rental_cost + SESSION_1MAX * RATE_PER_SESSION1 <<  endl;
            }
            else if(equipment_rental == 'N' || equipment_rental == 'n')
            {
                earning += total_cost2 + SESSION_1MAX * RATE_PER_SESSION1;
                cout << "Total cost will be $" << total_cost2 + SESSION_1MAX * RATE_PER_SESSION1 <<  endl;
            }   
        }
        else if(sessions >= SESSION_3MIN){
            cout << "That will be $" << total_cost3 + (SESSION_1MAX * RATE_PER_SESSION1) + (SESSION_1MAX * RATE_PER_SESSION2)  << " for the sessions and the total duration will be " << duration << " minutes.\n";

            cout << "Would you like include equipment rental at $20 (Y/N)\n";
            equipment_rental = Equipment_Rental_Ans();

            if(equipment_rental == 'Y' || equipment_rental == 'y')
            {
                earning += total_cost3 + equipment_rental_cost + (SESSION_1MAX * RATE_PER_SESSION1) + (overlim2 * RATE_PER_SESSION2);
                cout << "Total cost will be $" << total_cost3 + equipment_rental_cost + (SESSION_1MAX * RATE_PER_SESSION1) + (overlim2 * RATE_PER_SESSION2) <<  endl;
            }
            else if(equipment_rental == 'N' || equipment_rental == 'n')
            {
                earning += total_cost3 + (SESSION_1MAX * RATE_PER_SESSION1) + (overlim2 * RATE_PER_SESSION2);
                cout << "Total cost will be $" << total_cost3 + (SESSION_1MAX * RATE_PER_SESSION1) + (overlim2 * RATE_PER_SESSION2) <<  endl;
            }
        }
        cout << "Do you wish to leave this program? (Enter 11234883 to leave or any other key to restart program)\n";
        cin >> sentinel;
        if(sentinel == QUIT){
            break;
        }
    }
    cout << "********************************************\n";
    cout << "You have left the program. Thanks for coming\n";
    cout << "********************************************\n";
    cout << "Data Summary:\n";
    cout << "Customers = " << customer_counter << endl;
    cout << "Total Earnings = $" << earning;

    return 0;
}