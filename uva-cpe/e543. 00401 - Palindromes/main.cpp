#include <bits/stdc++.h>

using namespace std;

map<char, char> mirror = { {'A','A'},{'E','3'},{'H','H'},{'I','I'},{'J','L'},
{'L','J'},{'M','M'},{'O','O'},{'S','2'},{'T','T'},{'U','U'},{'V','V'},{'W','W'},
{'X','X'},{'Y','Y'},{'Z','5'},{'1','1'},{'2','S'},{'3','E'},{'5','Z'},{'8','8'}
};

bool pal(string s){
    int len = s.size();
    for(int i = 0; i < len; i++){
        if(s[i] != s[len - 1 - i]){
            return false;
            break;
        }
    }
    return true;
}

bool mir(string s){
    int len = s.size();
    for(int i = 0; i < len; i++){
        if(s[i] != mirror[s[len - 1 -i]]){
            return false;
            break;
        }
    }
    return true;
}

int main()
{
    string s;
    while(getline(cin, s)){
        cout << s ;
        if(pal(s) && mir(s)){
            cout << " -- is a mirrored palindrome." << endl;
        }else if(pal(s)){
            cout << " -- is a regular palindrome." << endl;
        }else if (mir(s)){
            cout << " -- is a mirrored string." << endl;
        }else{
            cout << " -- is not a palindrome." << endl;
        }
    }
    return 0;
}
