#include <bits/stdc++.h>

using namespace std;

map<string, char> m = {
    {".-", 'A'},
    {"-...", 'B'},
    {"-.-.", 'C'},
    {"-..", 'D'},
    {".", 'E'},
    {"..-.", 'F'},
    {"--.", 'G'},
    {"....", 'H'},
    {"..", 'I'},
    {".---", 'J'},
    {"-.-", 'K'},
    {".-..", 'L'},
    {"--", 'M'},
    {"-.", 'N'},
    {"---", 'O'},
    {".--.", 'P'},
    {"--.-", 'Q'},
    {".-.", 'R'},
    {"...", 'S'},
    {"-", 'T'},
    {"..-", 'U'},
    {"...-", 'V'},
    {".--", 'W'},
    {"-..-", 'X'},
    {"-.--", 'Y'},
    {"--..", 'Z'}
};

int main() {
    string s;
    getline(cin, s);
    string t = "";

    for(int i = 0; i < s.size(); i++){
        if(m.find(s.substr(i, 4)) != m.end()){
            t += m[s.substr(i, 4)];
            i+= 3;
        } else if(m.find(s.substr(i, 3)) != m.end()){
            t += m[s.substr(i, 3)];
            i += 2;
        } else if(m.find(s.substr(i, 2)) != m.end()){
            t += m[s.substr(i, 2)];
            i += 1;
        } else if(m.find(s.substr(i, 1)) != m.end()){
            t += m[s.substr(i, 1)];
        } else if(s[i] == '/'){
            t += ' ';
        }
    }
    cout << t << '\n';
}
