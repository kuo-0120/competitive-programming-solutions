#include <bits/stdc++.h>
using namespace std;

int main() {
    map<char,char> keyboard = {
        // 第一排
        {'e','q'},{'r','w'},{'t','e'},{'y','r'},
        {'u','t'},{'i','y'},{'o','u'},{'p','i'},
        {'[','o'},{']','p'},{'\\',']'},
        // 第二排
        {'d','a'},{'f','s'},{'g','d'},{'h','f'},
        {'j','g'},{'k','h'},{'l','j'},{';','k'},
        {'\'','l'},
        // 第三排
        {'c','z'},{'v','x'},{'b','c'},{'n','v'},
        {'m','b'},{',','n'},{'.','m'},{'/',','}
    };

    string line;
    while (getline(cin, line)) {
        for (char c : line) {
            char lower = tolower(c); // 先轉小寫
            if (keyboard.count(lower)) {
                cout << keyboard[lower];
            } else {
                cout << c;  // 空白或其他直接輸出
            }
        }
        cout << '\n';
    }
    return 0;
}
