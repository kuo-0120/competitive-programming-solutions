#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    bool open = true;  // 下一個 " 是否為開引號
    while (getline(cin, s)) {
        string out;
        out.reserve(s.size() * 2);  // 可能會長到兩倍
        for (char ch : s) {
            if (ch == '"') {
                if (open) out += "``";
                else       out += "''";
                open = !open;
            } else {
                out += ch;
            }
        }
        cout << out << '\n';
    }
    return 0;
}
