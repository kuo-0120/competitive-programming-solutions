#include <bits/stdc++.h>

using namespace std;

map<char, char> mirror_map = {
    {'A','A'}, {'E','3'}, {'H','H'}, {'I','I'}, {'J','L'}, {'L','J'},
    {'M','M'}, {'O','O'}, {'S','2'}, {'T','T'}, {'U','U'}, {'V','V'},
    {'W','W'}, {'X','X'}, {'Y','Y'}, {'Z','5'}, {'1','1'}, {'2','S'},
    {'3','E'}, {'5','Z'}, {'8','8'}
};

bool is_palindrome (string s){
    int l = s.length();
    for (int i = 0; i < l/2; i++){
        if (s[i] != s[l-1-i]){
            return false;
        }
    }
    return true;
}

bool is_mirrored (string s){
    int l = s.length();
    for (int i = 0; i < l/2; i++){
        char left = s[i];
        char right = s[l-1-i];
        if (mirror_map[right] != left){
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    while (cin >> s){
        bool m = is_mirrored(s);
        bool p = is_palindrome(s);
        if (p && m){
            cout << s << " -- is a mirrored palindrome." << endl;
        }else if (p){
            cout << s << " -- is a regular palindrome," << endl;
        }else if (m){
            cout << s << " -- is a mirrored string." << endl;
        }else{
            cout << s << " -- is not a palindrome" << endl;
        }
    }
    return 0;
}
