#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    while (getline(cin, a) && getline(cin, b)) { // 一次讀兩行，若到 EOF 會自動跳出
        int ca[26] = {0}, cb[26] = {0};
        for (char ch : a) if ('a' <= ch && ch <= 'z') ca[ch - 'a']++;
        for (char ch : b) if ('a' <= ch && ch <= 'z') cb[ch - 'a']++;

        string s;
        for (int i = 0; i < 26; i++) {
            int common = min(ca[i], cb[i]);
            s.append(common, 'a' + i); // 多次數字母要加進去
        }
        cout << s << "\n"; // 如果沒共同字母，就會印空行
    }
    return 0;
}
