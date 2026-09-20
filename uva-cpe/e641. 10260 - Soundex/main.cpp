#include <bits/stdc++.h>
using namespace std;

map<char, int> soundex = {
    {'B','1'},{'F','1'},{'P','1'},{'V','1'},
    {'C','2'},{'G','2'},{'J','2'},{'K','2'},{'Q','2'},{'S','2'},{'X','2'},{'Z','2'},
    {'D','3'},{'T','3'},
    {'L','4'},
    {'M','5'},{'N','5'},
    {'R','6'}
};

int main() {
    string s;
    while (getline(cin, s)) {
        for (int i = 0; i < (int)s.size(); i++) {

            // 1) 這個字母不在表內：跳過
            if (soundex.find(s[i]) == soundex.end()) continue;

            // 2) 前一個字母也在表內 且 code 相同：跳過（去除連續重複）
            if (i > 0 &&
                soundex.find(s[i - 1]) != soundex.end() &&
                soundex[s[i]] == soundex[s[i - 1]]) {
                continue;
            }

            // 3) 其他情況：輸出
            cout << (char)soundex[s[i]];
        }
        cout << "\n";
    }
    return 0;
}
