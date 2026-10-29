#include <iostream>
#include <string>

using namespace std;

int main(){
    string phrase;
    cin >> phrase;
    //ZABCD zabcd
    for(int j = 0; j < 26; j++){
    for(int i = 0; i < phrase.size(); i++){
        if(phrase[i] != ' '){
        if(phrase[i] == 'A')
            phrase[i] = 'Z';
        else
            phrase[i] -= 1;
        }

    }
    cout << phrase << endl;
    }



return 0;
}
