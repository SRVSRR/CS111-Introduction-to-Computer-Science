// "If you think it's simple, then you have misunderstood the problem." - Bjarne Stroustrup
    
#include <iostream>
using namespace std;

int main()
{

    int stars = 5;
    int balls = 1;
    int balls2 = 1;
 

    cout << "For Loop Vertical\n";
    for(int i = 0; i < stars; i++){
        cout << "* \n";
    }

    cout << "While Loop Vertical\n";
    while(balls <= stars){
        balls++;
        cout << "* \n";
    }

    cout << "For Loop Horizontal\n";
    for(int i = 0; i < stars; i++){
        cout << "* ";
    }

    cout << "While Horizontal\n";
    while(balls2 <= stars){
        balls2++;
        cout << "* ";
    }
        cout << "Mew\n";

    for(int j = 1; j <= stars; j++){
        for(int k = 1; k <= stars; k++){
            cout << "* ";

        }
        cout <<"\n";
    }

    int balls3 = 1;
    int balls4 = 1;

    while(balls3 <= stars){
        balls3++;
        while(balls4 <= stars){
            balls4++;
            cout <<"* ";
        }
        cout << "\n";
    }
    // Use a For Loop and a While loop to complete these questions:

    // 1) Write a program that prints 5 stars in a line (easy)

    // Output: * * * * *

    // ------------------------------------------------------------------------

    // 2) Write a program that prints 5 stars, each on a new line (medium)

    // Output:
    // *
    // *
    // *
    // *
    // *

    // ------------------------------------------------------------------------

    // 3) Write a program that prints 25 stars (5 rows and 5 columns) (hard)

    // Output:
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *

    return 0;
}
