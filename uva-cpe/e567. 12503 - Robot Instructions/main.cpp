#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int dir[n];

        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            if (s == "LEFT") {
                dir[i] = -1;
            } else if (s == "RIGHT") {
                dir[i] = 1;
            } else {
                string as;
                int k;
                cin >> as >> k;
                dir[i] = dir[k - 1];
            }
        }

        int pos = 0;
        for (int i = 0; i < n; i++) {
            pos += dir[i];
        }
        cout << pos << "\n";
    }

    return 0;
}
