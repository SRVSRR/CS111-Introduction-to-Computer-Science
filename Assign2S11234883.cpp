//Names:                Vishant Kumar,          Rohan Nandan
//ID's:                 S11230430,              S11234883
//Tutorial Groups:      Thursday (11am - 1pm),  Tuesday (3pm - 5pm)


#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

// Input validation for choice selection
int validate_input(int lower_limit, int upper_limit)
{
    int input;
    cin >> input;
    
    while(input < lower_limit  || input > upper_limit || cin.fail()) // Have choice exist between 1 and 6
	{
		if (cin.fail())
		{
			cin.clear();
			string dummy;
			cin >> dummy;
			cout << "ERROR!. Invalid option was detected" << endl;
			cout << "Kindly enter a number" << endl;
		}
		
		else if (input < lower_limit || input > upper_limit)
		{
			cin.clear();
			cout << "ERROR!. Your choice is not in range" << endl;
			cout << "Kindly enter a number between " << lower_limit << " and " << upper_limit << endl;
		}
		
		cin >> input;
    }
    return input;
}

//Function to display a welcome message
void welcome_message()
{
    cout << "+-------------------------------------------------+\n";
    cout << "|   WELCOME TO THE STUDENT MARKS SORTING PROGRAM  |\n";
    cout << "+-------------------------------------------------+\n";
}

//Function to display exit message
void end_program(bool& continue_executing)
{
	continue_executing = false;

	cout << endl;
	cout << "+-------------------------------------+\n";
	cout << "|  Thank you for using this program!  |\n";
	cout << "+-------------------------------------+\n";
}

// Function to start or quit the program
void program_start_quit(bool& continue_executing)
{
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
		continue_executing = true;
	}
	
	else if (user_decision == 'Q' || user_decision == 'q')
	{
		continue_executing = false;
	}
}

//Function to fill the diiferent fields of arrays
void fill_array(string file_name, int& rows, string student_id[], string student_name[], double maths_marks[], double science_marks[], double english_marks[])
{
	string remove_header;
	
	ifstream read_file;
	read_file.open(file_name.c_str());
	
	if(!read_file) 
	{
		cout << "ERROR!. This file could not be found" << endl;
	}
	
	else
	{
		getline(read_file, remove_header); // remove the header lines
		
		// While the file can read information
		while(read_file >> student_id[rows] >> student_name[rows] >> maths_marks[rows] >> science_marks[rows] >> english_marks[rows])
		{ 
			rows++;
		}
	}
}

//Function to print the entire list as per input file
void print_entire_list(int rows, string student_id[], string student_name[], double maths_marks[], double science_marks[], double english_marks[])
{
	cout << "\nThe Entire List of Students:" << endl;
	cout << endl;
	cout << left << setw(15) << "ID#" << setw(10);
	cout << left << setw(15) << "Name" << setw(15);
	cout << left << setw(15) << "Maths" << setw(10);
	cout << left << setw(15) << "Science" << setw(15);
	cout << left << setw(15) << "English" << setw(15) << endl;
	
	for(int i = 0; i < rows; i++)
	{
		cout << left << setw(15) << student_id[i] << setw(10);
		cout << left << setw(15) << student_name[i] << setw(15);
		cout << left << setw(15) << maths_marks[i] << setw(10);
		cout << left << setw(15) << science_marks[i] << setw(15);
		cout << left << setw(15) << english_marks[i] << endl;	
	}
}

//Function to search for a particular students via his/her ID#
void print_by_id(int rows, string student_id[], string student_name[], double maths_marks[], double science_marks[], double english_marks[])
{
	string query_id;
	bool data_exists = false; 
	
	// Example given to ensure user uses uppercase S
	cout << "Kindly enter the ID number that you would like to search. Example: S122243" << endl;
	cin >> query_id;
	while(cin.fail())
	{
		cin.clear();
		string dummy;
		cin >> dummy;
		cout << "ERROR!. Invalid Input Detected" << endl;
		cout << "Please enter letter \"S\" with numbers only" << endl;
		cin >> query_id;
	}
	
	cout << "\nList of student(s) matching the given ID:" << endl;
	cout << endl;
	cout << left << setw(15) << "ID#" << setw(15);
	cout << left << setw(15) << "Name" << setw(15);
	cout << left << setw(15) << "Maths" << setw(15);
	cout << left << setw(15) << "Science" << setw(15);
	cout << left << setw(15) << "English" << setw(15) << endl;
	
	for(int i = 0; i < rows; i++)
	{
		if (student_id[i] == query_id)
		{
			data_exists = true;
			cout << left << setw(15) << student_id[i] << setw(15);
			cout << left << setw(15) << student_name[i] << setw(15);
			cout << left << setw(15) << maths_marks[i] << setw(15);
			cout << left << setw(15) << science_marks[i] << setw(15);
			cout << left << setw(15) << english_marks[i] << setw(15);
		}
	}
	
	cout << endl;

	if (!data_exists) // If bool remains false to the end of the function
	{
		cout << "No students were found with the ID# " << query_id << endl;
	}
}

//Function to calculate the print the entire list with total marks
void print_by_total(int rows, string student_id[], string student_name[], double maths_marks[], double science_marks[], double english_marks[], double total_marks[])
{
	cout << "\nThe Entire List of Students with Total:" << endl;
	cout << endl;
	cout << left << setw(15) << "ID#" << setw(10);
	cout << left << setw(15) << "Name" << setw(15);
	cout << left << setw(15) << "Maths" << setw(10);
	cout << left << setw(15) << "Science" << setw(15);
	cout << left << setw(15) << "English" << setw(15);
	cout << left << setw(15) << "Total" << setw(15) << endl;
	
	for(int i = 0; i < rows; i++)
	{
		total_marks[i] = maths_marks[i] + science_marks[i] + english_marks[i];
		cout << left << setw(15) << student_id[i] << setw(10);
		cout << left << setw(15) << student_name[i] << setw(15);
		cout << left << setw(15) << maths_marks[i] << setw(10);
		cout << left << setw(15) << science_marks[i] << setw(15);
		cout << left << setw(15) << english_marks[i];	
		cout << left << setw(15) << total_marks[i] << endl;
	}
}

// Function to sort arrays based on total marks from lowest to highest using Bubble Sort algorithm
void print_sorted(int rows, string student_id[], string student_name[], double maths_marks[], double science_marks[], double english_marks[], double total_marks[]) 
{
    for (int i = 0; i < rows - 1; ++i) 
	{
        // Last i elements are already sorted
        for (int j = 0; j < rows - i - 1; ++j) 
		{
            if (total_marks[j] > total_marks[j + 1])
			{  
				// Sorting in ascending order
                // Sort the total mark for each student
                double temp_total = total_marks[j];
                total_marks[j] = total_marks[j + 1];
                total_marks[j + 1] = temp_total;

                // Swap the ID# according to the total mark
                string temp_id = student_id[j];
                student_id[j] = student_id[j + 1];
                student_id[j + 1] = temp_id;

                // Swap the student name according to the total mark
                string temp_name = student_name[j];
                student_name[j] = student_name[j + 1];
                student_name[j + 1] = temp_name;

                // Swap the maths marks according to the total mark
                double temp_maths = maths_marks[j];
                maths_marks[j] = maths_marks[j + 1];
                maths_marks[j + 1] = temp_maths;

                // Swap the science marks according to the total mark
                double temp_science = science_marks[j];
                science_marks[j] = science_marks[j + 1];
                science_marks[j + 1] = temp_science;

                // Swap english marks according to the total mark
                double temp_english = english_marks[j];
                english_marks[j] = english_marks[j + 1];
                english_marks[j + 1] = temp_english;
            }
        }
    }
		
	for (int i = 0; i < rows; i++)
	{
        total_marks[i] = maths_marks[i] + science_marks[i] + english_marks[i];
    }

	// Print the sorted list
    cout << "\nThe List of Students Sorted by Total Marks (Lowest to Highest):" << endl;
    cout << endl;
    cout << left << setw(15) << "ID#" << setw(15);
    cout << left << setw(15) << "Name" << setw(15);
    cout << left << setw(15) << "Maths" << setw(15);
    cout << left << setw(15) << "Science" << setw(15);
    cout << left << setw(15) << "English" << setw(15);
    cout << left << setw(15) << "Total" << setw(15) << endl;

    for (int i = 0; i < rows; i++) 
	{
        cout << left << setw(15) << student_id[i] << setw(15);
        cout << left << setw(15) << student_name[i] << setw(15);
        cout << left << setw(15) << maths_marks[i] << setw(15);
        cout << left << setw(15) << science_marks[i] << setw(15);
        cout << left << setw(15) << english_marks[i] << setw(15);
        cout << left << setw(15) << total_marks[i] << endl;
    }
}

void write_report(string file_name, int rows, string student_id[], string student_name[], double maths_marks[], double science_marks[], double english_marks[], double total_marks[])
{	
    // Calculate total marks for each student
    for (int i = 0; i < rows; ++i)
    {
        total_marks[i] = maths_marks[i] + science_marks[i] + english_marks[i];
    }

    // Sort the arrays by total marks in ascending order
    for (int i = 0; i < rows - 1; ++i)
    {
        for (int j = 0; j < rows - i - 1; ++j)
        {
            if (total_marks[j] > total_marks[j + 1])
            {
                // Sort the total mark for each student
                double temp_total = total_marks[j];
                total_marks[j] = total_marks[j + 1];
                total_marks[j + 1] = temp_total;

                // Swap the ID# according to the total mark
                string temp_id = student_id[j];
                student_id[j] = student_id[j + 1];
                student_id[j + 1] = temp_id;

                // Swap the student name according to the total mark
                string temp_name = student_name[j];
                student_name[j] = student_name[j + 1];
                student_name[j + 1] = temp_name;

                // Swap the maths marks according to the total mark
                double temp_maths = maths_marks[j];
                maths_marks[j] = maths_marks[j + 1];
                maths_marks[j + 1] = temp_maths;

                // Swap the science marks according to the total mark
                double temp_science = science_marks[j];
                science_marks[j] = science_marks[j + 1];
                science_marks[j + 1] = temp_science;

                // Swap the english marks according to the total mark
                double temp_english = english_marks[j];
                english_marks[j] = english_marks[j + 1];
                english_marks[j + 1] = temp_english;
            }
        }
    }
	
	// Calculate averages and identify highest and lowest marks
    double total_maths = 0, total_science = 0, total_english = 0, total_sum = 0;
    double highest_mark = total_marks[0], lowest_mark = total_marks[0];
    // Index to find student location from sorted list
    int highest_index = 0, lowest_index = 0;

    for (int i = 0; i < rows; ++i)
    {
		// Sum of each subject and total
        total_maths += maths_marks[i];
        total_science += science_marks[i];
        total_english += english_marks[i];
		total_sum += total_marks[i];
        
		// Find new highest mark
        if (total_marks[i] > highest_mark)
        {
            highest_mark = total_marks[i];
            highest_index = i;
        }
        
		// Find new lowest mark
        if (total_marks[i] < lowest_mark)
        {
            lowest_mark = total_marks[i];
            lowest_index = i;
        }
    }

	// Total sum divided by total students 
    double avg_maths = total_maths / rows;
    double avg_science = total_science / rows;
    double avg_english = total_english / rows;
	double avg_total = total_sum / rows;
    
    ofstream write_file;
	write_file.open(file_name.c_str());

    if (!write_file) // If file isn't found, display error message 
    {
        cout << "ERROR!. This file could not be found" << endl;
    }
    else
    {
		write_file << fixed << setprecision(2) << endl;

        write_file << "The List of Students Sorted by Total Marks:\n";
        write_file << left << setw(15) << "ID#" << setw(15);
        write_file << left << setw(15) << "Name" << setw(15);
        write_file << left << setw(15) << "Maths" << setw(15);
        write_file << left << setw(15) << "Science" << setw(15);
        write_file << left << setw(15) << "English" << setw(15);
        write_file << left << setw(15) << "Total" << setw(15) << endl;

        for (int i = 0; i < rows; ++i)
        {
            write_file << left << setw(15) << student_id[i] << setw(15);
            write_file << left << setw(15) << student_name[i] << setw(15);
            write_file << left << setw(15) << maths_marks[i] << setw(15);
            write_file << left << setw(15) << science_marks[i] << setw(15);
            write_file << left << setw(15) << english_marks[i] << setw(15);
            write_file << left << setw(15) << total_marks[i] << endl;
        }

		write_file << fixed << setprecision(1) << endl;

		// Write averages
        write_file << "\nAverages:\n";
        write_file << "Maths: "  << avg_maths << "\n";
        write_file << "Science: " << avg_science << "\n";
        write_file << "English: " << avg_english << "\n";
		write_file << "Total: " << avg_total << "\n";

        // Write highest and lowest mark student
        write_file << "\nStudent with Highest Mark:\n";
        write_file << "ID#: " << student_id[highest_index] << "\n";
        write_file << "Name: " << student_name[highest_index] << "\n";
        write_file << "Total Marks: " << highest_mark << "\n";

        write_file << "\nStudent with Lowest Mark:\n";
        write_file << "ID#: " << student_id[lowest_index] << "\n";
        write_file << "Name: " << student_name[lowest_index] << "\n";
        write_file << "Total Marks: " << lowest_mark << "\n";

		// Message that file has been generated
        cout << "Report Successfully Generated to " << file_name << endl;
    }

    write_file.close();
}

int main()
{
	//Variable declarations
	int choice;
	int rows = 0;
	bool continue_executing = true;
	bool option3_invoked = false;
    
    //Constant declarations
    const int CAPACITY = 300;
    const int PRINT_LIST = 1;
    const int PRINT_DETAILS = 2;
    const int PRINT_TOTAL = 3;
    const int PRINT_SORTED = 4;
    const int WRITE_REPORT = 5;
    const int EXIT_PROGRAM = 6;
    const int FIRST_OPTION = 1;
    const int LAST_OPTION = 6;
    
    //Arrays for storing different categories of student data
    string student_id[CAPACITY];
    string student_name[CAPACITY];
    double maths_marks[CAPACITY];
    double science_marks[CAPACITY];
    double english_marks[CAPACITY];
	double total_marks[CAPACITY];
    
    cout << fixed << setprecision(1) << endl; // Set variables to 1 decimal point
    
    welcome_message();

	program_start_quit(continue_executing);
    
    while (continue_executing)
    {
    	rows = 0;
    	fill_array("studentmarks.txt", rows, student_id, student_name, maths_marks, science_marks, english_marks);
    	
    	cout << endl;
    	
    	// Display main menu 
    	cout << "Menu:" << endl;
    	cout << "1) Print the Entire List" << endl;
    	cout << "2) Print Details of Student Matching a Given ID" << endl;
    	cout << "3) Calculate Total and Print Entire List with Total" << endl;
    	cout << "4) Print List Sorted by Total" << endl;
    	cout << "5) Write Report to file" << endl;
    	cout << "6) Exit program" << endl;
    	cout << "Enter your choice:";
    	choice = validate_input(FIRST_OPTION, LAST_OPTION);

    	// if/else statements for choice selection
    	if (choice == PRINT_LIST)
    	{
    		// Call print entire list function
    		print_entire_list(rows, student_id, student_name, maths_marks, science_marks, english_marks);
		}
		
		else if (choice == PRINT_DETAILS)
		{
			// Call print by id function
			print_by_id(rows, student_id, student_name, maths_marks, science_marks, english_marks);
		}
    	
    	else if (choice == PRINT_TOTAL)
    	{
    		// Call print by total function
    		print_by_total(rows, student_id, student_name, maths_marks, science_marks, english_marks, total_marks);
    		option3_invoked = true; // bool to know choice 3 has been invoked
		}
    	
    	else if (choice == PRINT_SORTED)
    	{
    		if (option3_invoked == true) // Choice 3 must be invoked before choice 4 can be chosen
    		{
    			// Call print sorted function
    			print_sorted(rows, student_id, student_name, maths_marks, science_marks, english_marks, total_marks);
			}
			else
			{
				cout << "Please select option 3 before selecting option 4" << endl; // Message to invoke choice 3 before continuing
			}
		}
		
		else if (choice == WRITE_REPORT)
		{
			if (option3_invoked == true) // Choice 3 must be invoked before choice 5 can be chosen
			{
				// 	Call write report function
				write_report("summary.txt", rows, student_id, student_name, maths_marks, science_marks, english_marks, total_marks);
			}
			else 
			{
				cout << "Please select option 3 before selecting option 5" << endl; // Message to invoke choice 3 before continuing
			}
		}
		
		else if (choice == EXIT_PROGRAM)
		{
			// Call end program function
			end_program(continue_executing);
		}
	}
	

    return 0;
}
