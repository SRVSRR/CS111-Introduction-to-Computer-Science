#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    const int MAX = 1000;
    const int MULTIPLE = 7;

/*
    for(int i = 7;i <= MAX;i+=MULTIPLE){
        sum+=i;
        
    }
*/


    int i = 7; 
/*
    while(i <= MAX){
        if(i % MULTIPLE == 0){
            sum+=i;
        }
        i++;
        
    }
*/
/*
    for(int i = 7;i <= MAX;i+=MULTIPLE){
        if(i % MULTIPLE == 0){
            sum+=i;
        }
        
    }
*/

    do{
        if(i % MULTIPLE == 0){
            sum+=i;
        }
        i++;
    }
    while(i <=1000);

    cout << sum << '\n';



    return 0;
}




