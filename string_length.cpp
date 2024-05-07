#include <iostream>

using namespace std;

int main(){
   /* string ans ="";
    for(int i = 1; i <= 4; i++){
        if(i % 1 == 0){
            ans+="*";
        }
        if(i % 2 == 0){
            ans+="*";
        }
        if(i % 3 == 0){
            ans+="*";
        }
        if(i % 4 == 0){
            ans+="*";
        }
        cout << ans << '\n';
    }
    */
    for(string name = "*"; name.length() <= 9; name += " *"){
        cout << name<< '\n';
   }
    return 0;
}
