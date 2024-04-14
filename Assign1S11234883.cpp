/*
Name: Rohan Manish Nandan
ID: S11234883
Course: Bachelors of Software Engineering.
Tutorial Group: ITS 14, Tuesday 3:00PM - 5:00PM.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    string f_Name; //first name
    string sec_Name; // surname
    int Employee_ID;
    string Gender; // gender (m/f/o)
    int YOB; // int year of birth
    const int current_year = 2024, lowest_year = 1924, Employee_ID_Limit = 999; // const declaration for imaginary numbers
    double chargeable_income;
    string residential_status; // y/n
    char quit;

    while(quit != 'Q' || quit != 'q')
    {
        cout << fixed << setprecision(2);  // Set precision to 2 decimal places

        cout << "+----------------------------+\n";
        cout << "| Welcome to Tax Calculators |\n"; // welcome message
        cout << "+----------------------------+\n";

        cout << "Please enter your first name\n";
        cin >> f_Name; // unput first name

        cout << "Please enter your surname\n";
        cin >> sec_Name; // input surname

        cout << "Please enter your gender: (M/F/O)\n";
        cin >> Gender;

        /* while loop to validate input */
        while(Gender != "F" && Gender != "f" && Gender != "M" && Gender != "m" && Gender != "O" && Gender != "o"){
            cout << "Please enter in correct input: (M/F/O)\n";
            cin >> Gender; 
        }
        /* Assign Gender depending on response */
        if(Gender == "M" || Gender == "m")
        {
            Gender = "Mr";
        }
        else if(Gender == "F" || Gender == "f")
        {
            Gender = "Ms";
        }
        else if(Gender == "O" || Gender == "o")
        {
            Gender = "one";
        }
    
        cout << "Enter year of birth\n";
        cin >> YOB; // date of birth

        /* input validation for date of birth between 2024 and 1924 */
        while(YOB >= current_year || YOB <= lowest_year || cin.fail()){
            cin.clear();
            string dummy;
            cin >> dummy;
            cout << "Please enter in a valid year (between 1924 and 2023):\n";
            cin >> YOB;
        }

        cout << "Enter your employee ID (exclude 0s)\n";
        cin >> Employee_ID;
        
        /* Validate input to Employee_ID_Limit and cin.fail*/
        while(Employee_ID >= Employee_ID_Limit || cin.fail()){
            cin.clear();
            string dummy;
            cin >> dummy;
            cout << "Please enter valid input (Employee ID must be only 3 digits)\n";
            cin >> Employee_ID;
        }

        cout << "Are you a resident of Fiji?(Y/N)\n";
        cout << residential_status;

        /* Validate input and reassign "a resident" and "not a resident depending on input"*/
        while(residential_status != "Y" && residential_status != "y" && residential_status != "N" && residential_status != "n"){
            cout << "Please enter in correct input (Y/N)\n";
            cin >> residential_status;
        }
        if(residential_status == "Y" || residential_status == "y")
        {
            residential_status = "a resident";
        }
        else if(residential_status == "N" || residential_status == "n")
        {
            residential_status = "not a resident";
        }

        cout << "Enter in your chargeable income (exclude $ symbol):\n";
        cin >> chargeable_income;

        /*  const tax brackets  */
        const int bracket1_Min = 0;
        const int bracket1_Max = 30000;
        const int bracket2_Min = 30001;
        const int bracket2_Max = 50000;
        const int bracket3_Min = 50001;
        const int bracket3_Max = 270000;
        const int bracket4_Min = 270001;  
        const int bracket4_Max = 300000;
        const int bracket5_Min = 300001;  
        const int bracket5_Max = 350000;
        const int bracket6_Min = 350001;
        const int bracket6_Max = 400000;
        const int bracket7_Min = 400001;
        const int bracket7_Max = 450000;
        const int bracket8_Min = 450001;
        const int bracket8_Max = 500000;
        const int bracket9_Min = 500001;
        const int bracket9_Max = 1000000;
        const int bracket10_Min = 1000001;

        /*  const tax percentages  */
        const double residential_taxexcess_percentages2 = .18;
        const double residential_taxexcess_percentages3 = .20;
        const double residential_taxexcess_percentages4 = .33;
        const double residential_taxexcess_percentages5 = .34;
        const double residential_taxexcess_percentages6 = .35;
        const double residential_taxexcess_percentages7 = .36;
        const double residential_taxexcess_percentages8 = .37;
        const double residential_taxexcess_percentages9 = .38;
        const double residential_taxexcess_percentages10 = .39;

        /* rounded tax amounts for residents */
        const int resident_tax_amount3 = 3600;
        const int resident_tax_amount4 = 47600;
        const int resident_tax_amount5 = 57500;
        const int resident_tax_amount6 = 74500;
        const int resident_tax_amount7 = 92000;
        const int resident_tax_amount8 = 110000;
        const int resident_tax_amount9 = 128500;
        const int resident_tax_amount10 = 318500;

        /* rounded tax amounts for residents */
        const int nonresident_tax_amount2 = 6000;
        const int nonresident_tax_amount3 = 10000;
        const int nonresident_tax_amount4 = 54000;
        const int nonresident_tax_amount5 = 63900;
        const int nonresident_tax_amount6 = 80900;
        const int nonresident_tax_amount7 = 98400;
        const int nonresident_tax_amount8 = 116400;
        const int nonresident_tax_amount9 = 134900;
        const int nonresident_tax_amount10 = 324900;

        /*  Tax calculations for residents  */
        const double residental_tax1 = (chargeable_income - bracket1_Min);
        const double residental_tax2 = (chargeable_income - bracket1_Max) * residential_taxexcess_percentages2;
        const double residental_tax3 = (chargeable_income - bracket2_Max) * residential_taxexcess_percentages3 + resident_tax_amount3 ;
        const double residental_tax4 = (chargeable_income - bracket3_Max) * residential_taxexcess_percentages4 + resident_tax_amount4;
        const double residental_tax5 = (chargeable_income - bracket4_Max) * residential_taxexcess_percentages5 + resident_tax_amount5;
        const double residental_tax6 = (chargeable_income - bracket5_Max) * residential_taxexcess_percentages6 + resident_tax_amount6; 
        const double residental_tax7 = (chargeable_income - bracket6_Max) * residential_taxexcess_percentages7 + resident_tax_amount7;
        const double residental_tax8 = (chargeable_income - bracket7_Max) * residential_taxexcess_percentages8 + resident_tax_amount8;
        const double residental_tax9 = (chargeable_income - bracket8_Max) * residential_taxexcess_percentages9 + resident_tax_amount9;   
        const double residental_tax10 = (chargeable_income - bracket9_Max) * residential_taxexcess_percentages10 + resident_tax_amount10;

        /*  Tax calculations for non residents  */
        const double nonresidental_tax1 = (chargeable_income - bracket1_Min) * residential_taxexcess_percentages3;
        const double nonresidental_tax2 = (chargeable_income - bracket1_Max) * residential_taxexcess_percentages3 + nonresident_tax_amount2;
        const double nonresidental_tax3 = (chargeable_income - bracket2_Max) * residential_taxexcess_percentages3 + nonresident_tax_amount3;
        const double nonresidental_tax4 = (chargeable_income - bracket3_Max) * residential_taxexcess_percentages4 + nonresident_tax_amount4;
        const double nonresidental_tax5 = (chargeable_income - bracket4_Max) * residential_taxexcess_percentages5 + nonresident_tax_amount5;
        const double nonresidental_tax6 = (chargeable_income - bracket5_Max) * residential_taxexcess_percentages6 + nonresident_tax_amount6; 
        const double nonresidental_tax7 = (chargeable_income - bracket6_Max) * residential_taxexcess_percentages7 + nonresident_tax_amount7;
        const double nonresidental_tax8 = (chargeable_income - bracket7_Max) * residential_taxexcess_percentages8 + nonresident_tax_amount8;
        const double nonresidental_tax9 = (chargeable_income - bracket8_Max) * residential_taxexcess_percentages9 + nonresident_tax_amount9;   
        const double nonresidental_tax10 = (chargeable_income - bracket9_Max) * residential_taxexcess_percentages10 + nonresident_tax_amount10;

        double tax;

        while(chargeable_income <= bracket1_Min || cin.fail()){
            cin.clear();
            string dummy;
            cin >> dummy;
            cout << "Enter a proper value\n";
            cin >> chargeable_income;
        }

        if(residential_status == "a resident"){ // using response for if statement
            if(chargeable_income <= bracket1_Max && chargeable_income >= bracket1_Min){
                tax = residental_tax1;

            }else if(chargeable_income <= bracket2_Max && chargeable_income >= bracket2_Min){
                tax = residental_tax2;;

            }else if(chargeable_income <= bracket3_Max && chargeable_income >= bracket3_Min){
                tax = residental_tax3;

            }else if(chargeable_income <= bracket4_Max && chargeable_income >= bracket4_Min){
                tax = residental_tax4;

            }else if(chargeable_income <= bracket5_Max && chargeable_income >= bracket5_Min){
                tax = residental_tax5;

            }else if(chargeable_income <= bracket6_Max && chargeable_income >= bracket6_Min){
                tax = residental_tax6;

            }else if(chargeable_income <= bracket7_Max && chargeable_income >= bracket7_Min){
                tax = residental_tax7;

            }else if(chargeable_income <= bracket8_Max && chargeable_income >= bracket8_Min){
                tax = residental_tax8;

            }else if(chargeable_income <= bracket9_Max && chargeable_income >= bracket9_Min){
                tax = residental_tax9;

            }else if(chargeable_income >= bracket10_Min){
                tax = residental_tax10;
            }else{
                cout << "Enter a correct value. Please round up to whole digits\n";
                cin >> chargeable_income;
            }
        }else if(residential_status == "not a resident"){
            if(chargeable_income <= bracket1_Max && chargeable_income >= bracket1_Min){
                tax = nonresidental_tax1;

            }else if(chargeable_income <= bracket2_Max && chargeable_income >= bracket2_Min){
                tax = nonresidental_tax2;;

            }else if(chargeable_income <= bracket3_Max && chargeable_income >= bracket3_Min){
                tax = nonresidental_tax3;

            }else if(chargeable_income <= bracket4_Max && chargeable_income >= bracket4_Min){
                tax = nonresidental_tax4;

            }else if(chargeable_income <= bracket5_Max && chargeable_income >= bracket5_Min){
                tax = nonresidental_tax5;

            }else if(chargeable_income <= bracket6_Max && chargeable_income >= bracket6_Min){
                tax = nonresidental_tax6;

            }else if(chargeable_income <= bracket7_Max && chargeable_income >= bracket7_Min){
                tax = nonresidental_tax7;

            }else if(chargeable_income <= bracket8_Max && chargeable_income >= bracket8_Min){
                tax = nonresidental_tax8;

            }else if(chargeable_income <= bracket9_Max && chargeable_income >= bracket9_Min){
                tax = nonresidental_tax9;

            }else if(chargeable_income >= bracket10_Min){
                tax = nonresidental_tax10;
            }else{
                cout << "Enter a correct value. Please round up to whole digits\n";
                cin >> chargeable_income;
            }
        }

        cout << "Hello " << Gender << ". " << f_Name.substr(0,1) << ". " << sec_Name << " (Employee ID:" << setw(3) << setfill('0') << Employee_ID << ")\n";
        cout << "You are " << current_year - YOB << " years old and " << residential_status << " of Fiji. Based on your provided income of $" << chargeable_income << ", you are requested to pay an income tax of $" << tax << "\n";

        cout << "Do you wish to leave this program? (Enter Q to leave or any other key to restart program)\n";
        cin >> quit;
        if(quit == 'Q' || quit == 'q'){
            break;
        }
    }
    cout << "+---------------------------+\n";
    cout << "| You have left the program |\n";
    cout << "+---------------------------+ \n";

    return 0;
}
