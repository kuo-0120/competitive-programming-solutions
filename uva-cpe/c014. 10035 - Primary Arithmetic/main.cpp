#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned long long a, b;
    while (cin >> a >> b) {
        if (a == 0 && b == 0) break;

        int carry = 0;     // 統計進位次數
        int carry_in = 0;  // 上一位是否有進位（0/1）

        while (a > 0 || b > 0) {
            int da = a % 10;
            int db = b % 10;
            int sum = da + db + carry_in;

            if (sum >= 10) {
                carry++;
                carry_in = 1;
            } else {
                carry_in = 0;
            }
            a /= 10;
            b /= 10;
        }

        if (carry == 0) {
            cout << "No carry operation.\n";
        } else if (carry == 1) {
            cout << "1 carry operation.\n";
        } else {
            cout << carry << " carry operations.\n";
        }
    }
    return 0;
}
