#include <bits/stdc++.h>
using namespace std;

int charToVal(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'A' && c <= 'Z') return c - 'A' + 10;
    if (c >= 'a' && c <= 'z') return c - 'a' + 36;
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (cin >> s) {
        // 忽略前導的 + 或 - 符號
        int start = 0;
        if (s[0] == '+' || s[0] == '-') start = 1;

        int maxDigit = 0;
        for (int i = start; i < (int)s.size(); i++) {
            maxDigit = max(maxDigit, charToVal(s[i]));
        }

        int base = max(maxDigit + 1, 2);
        bool found = false;

        for (int N = base; N <= 62; N++) {
            int mod = N - 1;
            long long rem = 0;
            for (int i = start; i < (int)s.size(); i++) {
                int val = charToVal(s[i]);
                rem = (rem * N + val) % mod;
            }
            if (rem == 0) {
                cout << N << "\n";
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "such number is impossible!\n";
        }
    }
    return 0;
}
