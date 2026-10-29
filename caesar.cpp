#include <iostream>
#include <string>

using namespace std;

int main(){
    string s; getline(cin, s);
    int d; cin >> d;

    for(auto& c : s)
    {
        if(c < 'A' || c > 'Z') continue;
        c+= d;
        if(c > 'Z')
            c-= 'Z'-'A'+1;
        else if(c < 'A')
            c = 'Z' + (c-'A'+1);
    }
    cout << s;

return 0;
}
