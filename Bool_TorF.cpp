#include <iostream>

using namespace std;

bool is_even(int mod_two){
    if(mod_two % 2 == 0){
        return true;
    }else {
        return false;
    }
}

int main(){
    int check = is_even(5);

    cout << check << endl;

    return 0;
}