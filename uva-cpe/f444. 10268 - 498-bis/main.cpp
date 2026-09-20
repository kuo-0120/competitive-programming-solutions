#include <bits/stdc++.h>
using namespace std;

int main() {

    int x;
    string line;
    while (cin >> x) {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (!getline(cin, line)) break;

        stringstream ss(line);
        vector<long long> a;
        long long v;
        while (ss >> v) a.push_back(v);

        int n = (int)a.size() - 1; // 多項式次數
        if (n <= 0) {
            cout << 0 << "\n";
            continue;
        }

        long long ans = 0;
        for (int i = 0; i < n; i++) {
            // a[i] * (n - i) * x^(n-1-i)
            ans += a[i] * (n - i) * (long long)pow(x, n - 1 - i);
        }

        cout << ans << "\n";
    }
    return 0;
}
