#include <iostream>
#include <string>
using namespace std;

// е硉经璸衡 a^b % mod
int mod_pow(int a, int b, int mod) {
    int result = 1;
    a %= mod;
    while (b > 0) {
        if (b % 2 == 1) result = (result * a) % mod;
        a = (a * a) % mod;
        b /= 2;
    }
    return result;
}

// ﹃ソ 4 锣俱计磷禬计
int get_tail_as_int(const string& s) {
    int result = 0;
    int start = max(0, (int)s.length() - 4);  // ソ4
    for (int i = start; i < s.length(); i++) {
        result = result * 10 + (s[i] - '0');
    }
    return result;
}

int main() {
    string n_str;
    while (cin >> n_str) {
        if (n_str == "0") break;

        int N = get_tail_as_int(n_str);  // 矪瞶ソ4程9999
        int total = 0;

        for (int i = 1; i <= N; ++i) {
            total = (total + mod_pow(i, i, 10)) % 10;
        }

        cout << total << endl;
    }
    return 0;
}
