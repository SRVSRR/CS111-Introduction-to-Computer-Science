#include <iostream>

using namespace std;

int main(){

    const int MULTIPLES = 9;


/*
    for(int i = 99;i >= MULTIPLES;i-=MULTIPLES){
        cout << i << '\n';
    }
*/

/*
    int i = 99; 
    while(i >= MULTIPLES ){
        cout << i << '\n';
        i-=MULTIPLES;
        
    }
*/
/*
    int i = 99; 
    while(i >= MULTIPLES ){
        if(i % 9 == 0){
            cout << i << '\n';
        }
        
        i--;
        
    }
*/
/*
    for(int i = 99;i >= MULTIPLES;i--){
        if(i % 9 == 0){
             cout << i << '\n';
        }  
    }
*/
    int i = 99;
    do{
        if(i % 9 == 0){
            cout << i << '\n';
            
        }
        i--;

    }
    while(i >= MULTIPLES);


    return 0;
}
