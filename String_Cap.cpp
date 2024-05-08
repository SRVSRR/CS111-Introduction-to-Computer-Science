#include <iostream> 
#include <cstring>

using namespace std;

int main(){
    const int capacity = 100;
    char sentence[capacity]= {"The Quick Brown Fox Jumps Over the Lazy Dog"};
    int a = 0, e = 0, i = 0, o = 0, u = 0, words = 0;

    for(int y = 0; y < strlen(sentence); y++){
        if(sentence[y] == 'a' || sentence[y] == 'A'){
            a++;
        }
        if(sentence[y] == 'e' || sentence[y] == 'E'){
            e++;

        }
        if(sentence[y] == 'i' || sentence[y] == 'I'){
            i++;
        }
        if(sentence[y] == 'o' || sentence[y] == 'O'){
            o++;
        }
        if(sentence[y] == 'u' || sentence[y] == 'U'){
            u++;
        }
        if(sentence[y] == ' '){
            words++;
        }
    }
    cout << "a count:" << a << endl;
    cout << "e count:" << e << endl;
    cout << "i count:" << i << endl;
    cout << "o count:" << o << endl;
    cout << "u count:" << u << endl;
    cout << "word count:" << words + 1 << endl;
    return 0;
}