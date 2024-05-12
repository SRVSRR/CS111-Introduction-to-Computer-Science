#include <iostream>

using namespace std;

int main(){
    int sessions = 0; // sessions to 0 to avoid random assignment
    int rate_per_session;
    char equipment_rental; // input validation for equipment
    int equipment_rental_cost = 20; // cost of equipment rental
    double session_duration = 60; // duration for each session
    int customer_counter = 0; // track customer count
    int earning = 0;

    int sentinel; // user input to stop program
    const int quit = 11234883;

    while(sentinel != quit){
        cout << "------------------------------------\n";
        cout << "Welcome to Fitness Training Services\n";
        cout << "------------------------------------\n";
        cout << "Please enter the number of sessions you would like to take, the duration of each session is 60 mins;\n";
        cin >> sessions;

        while(sessions < 1 || cin.fail())
        { // cin.fail
            cin.clear();
            string dummy;
            cin >> dummy;
            cout << "Incorrect Input. Sessions MUST be a number and GREATER than 0\n";
            cin >> sessions;
        }

        const int session_1Min = 1;   // declare and initialize constants for session limits
        const int session_1Max = 5;   
        const int session_2Min = 6;   
        const int session_2Max = 10;   
        const int session_3Min = 11;

        const int rate_per_session1 = 30; //declare and initialize constants for session rate costs
        const int rate_per_session2 = 25;
        const int rate_per_session3 = 20; 

        int overlim1 = sessions - session_1Max;
        int overlim2 = session_2Max - session_1Max;
        int overlim3 = sessions - session_2Max;


        int total_cost1 =  sessions * rate_per_session2; // assignments inside while loop 
        int total_cost2 =  overlim1 * rate_per_session2;
        int total_cost3 =  overlim3 * rate_per_session3;

        if(sessions >= session_1Min && sessions < session_2Min)
        {
            cout << "That will be $" << total_cost1 << " for the sessions and total duration will be "<< session_duration * sessions << " minutes.\n";
            customer_counter++; 

            cout << "Would you like include equipment rental at $20 (Y/N)\n";
            cin >> equipment_rental;

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
            else
            {
                cin.clear();
                string dummy;
                cin >> dummy;
                cout << "Please only enter Y, y, N or n \n"; 
                cin >> equipment_rental;
            }
        }
        else if(sessions >= session_2Min && sessions <= session_2Max ){
            cout << "That will be $" << total_cost2 + (session_1Max * rate_per_session1) << " for the sessions and the total duration will be "<< sessions * session_duration << " minutes.\n";
            customer_counter++;

            cout << "Would you like include equipment rental at $20 (Y/N)\n";
            cin >> equipment_rental;

            if(equipment_rental == 'Y' || equipment_rental == 'y')
            {
                earning += total_cost2 + equipment_rental_cost + session_1Max * rate_per_session1;
                cout << "Total cost will be $" << total_cost2 + equipment_rental_cost + session_1Max * rate_per_session1 <<  endl;
            }
            else if(equipment_rental == 'N' || equipment_rental == 'n')
            {
                earning += total_cost2 + session_1Max * rate_per_session1;
                cout << "Total cost will be $" << total_cost2 + session_1Max * rate_per_session1 <<  endl;
            }else
            {
                cin.clear();
                string dummy;
                cin >> dummy;
                cout << "Please only enter Y, y, N or n \n"; 
                cin >> equipment_rental;
            }

        }
        else if(sessions >= session_3Min){
            cout << "That will be $" << total_cost3 + (session_1Max * rate_per_session1) + (session_1Max * rate_per_session2)  << " for the sessions and the total duration will be " << sessions * session_duration << " minutes.\n";
            customer_counter++;

            cout << "Would you like include equipment rental at $20 (Y/N)\n";
            cin >> equipment_rental;

            if(equipment_rental == 'Y' || equipment_rental == 'y')
            {
                earning += total_cost3 + equipment_rental_cost + (session_1Max * rate_per_session1) + (overlim2 * rate_per_session2);
                cout << "Total cost will be $" << total_cost3 + equipment_rental_cost + (session_1Max * rate_per_session1) + (overlim2 * rate_per_session2) <<  endl;
            }
            else if(equipment_rental == 'N' || equipment_rental == 'n')
            {
                earning += total_cost3 + (session_1Max * rate_per_session1) + (overlim2 * rate_per_session2);
                cout << "Total cost will be $" << total_cost3 + (session_1Max * rate_per_session1) + (overlim2 * rate_per_session2) <<  endl;
            }else
            {
                    cin.clear();
                string dummy;
                cin >> dummy;
                cout << "Please only enter Y, y, N or n \n"; 
                cin >> equipment_rental;
            }
        }
        cout << "Do you wish to leave this program? (Enter 11234883 to leave or any other key to restart program)\n";
        cin >> sentinel;
        if(sentinel == 11234883){
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