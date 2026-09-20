#include <bits/stdc++.h>
using namespace std;

int bin_cnt(int n) {
    int cnt = 0;
    while (n > 0) {
        if (n % 2 == 1) cnt++;
        n /= 2;
    }
    return cnt;
}

int hex_cnt(int n) {
    string s = to_string(n);   // 把十進位數字轉字串
    int val = 0;
    for (char c : s) {
        int digit = c - '0';   // 題目保證只有 0~9
        val = val * 16 + digit;
    }
    return bin_cnt(val);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << bin_cnt(n) << " " << hex_cnt(n) << "\n";
    }
    return 0;
}
