#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (cin >> s) {
        if (s == "0") break;

        string x = s;
        int degree = 0;

        while (true) {
            int sum = 0;
            for (char c : x) sum += c - '0';

            if (sum % 9 != 0) {
                cout << s << " is not a multiple of 9.\n";
                break;
            } else {
                degree++;
                if (sum == 9) {
                    cout << s << " is a multiple of 9 and has 9-degree " << degree << ".\n";
                    break;
                }
                x = to_string(sum); // 繼續對數字和做下一輪
            }
        }
    }
    return 0;
}
