#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>


using namespace std;

int readint() // input validation(no perimeters since return is x)
{
    int x;
    cin >> x;

    while(cin.fail())
    {
        cin.clear();
        string notint;
        cin >> notint;
        cout << "Input " << notint << " is not an integer. Enter an integer.";
        cin >> x;
    }

    return x;
}

char signchar(int x) // make a * b value negative when x is below 0 ()
{
    if(x >= 0)
    {
        return '+';
    }
    else {
        return '-';
    }
}

int main()
{
    const int MAXINT = 10;
    const int MININT = -10;
    int x;
    int score = 0;
    char reply;
    int tries = 0;
    int a;
    int b;
    
    cout << "***********************************\n";
    cout << "*        CS111 math tutor         *\n";
    cout << "***********************************\n\n";
    cout << "Enter 'L'' to try a linear  and 'Q' to try a quadratic equation.\nAny other key to quit.";
    cin >> reply;

    while(reply == 'L' || reply == 'Q')
    {
       
        srand(time(0));
        a = rand()% (MAXINT - MININT + 1) + MININT;
        b = rand()% (MAXINT - MININT + 1) + MININT;
        if(reply == 'L')
        {
            cout << "\nWhat is the solution to\n";
            cout << a << " x " << signchar(a * b) << " " << fabs(a * b) << " = 0\n";
            x = readint();

            if( a * x + a * b == 0)
            {
                score++;
                cout << "Great!\n\n";
                tries++;
            }

            else
            {
                cout << "Oops!\n\n";
                tries++;
            }
        }

        else
        {
            cout << "\nWhat is a solution to\n";
            cout << "x^2 "<< signchar(a + b) << " "<< fabs(a * b) <<" x " << signchar(a * b)<< " "<< fabs(a * b)<<" = 0\n";
            cin >> x;
            x = readint();
            if( x * x + (a + b)* x + a * b == 0)
            {
                score++;
                cout << "Great!\n\n";
                tries++;
            }

            else
            {
                cout << "Oops!\n\n";
                tries++;
            }
        }

        cout << "Enter 'L'' to try a linear  and 'Q' to try a quadratic equation.\nAny other key to quit.";
        cin >> reply;
    }

    cout << "Your score is: " << score << endl;
    cout << "Your tries are: " << tries << endl;

    return 0;
}
