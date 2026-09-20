#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    string s;
    getline(cin, s); // 把第一行後面的換行吃掉
    getline(cin, s); // 額外再吃掉題目保證存在的空行

    for (int cs = 0; cs < t; cs++) {
        map<string,int> cnt;
        int total = 0;

        while (true) {
            if (!getline(cin, s)) break;   // EOF
            if (s.empty()) break;          // 空行 → 一組測資結束

            cnt[s]++;
            total++;
        }

        for (auto &p : cnt) {
            cout << p.first << " "
                 << fixed << setprecision(4)
                 << (p.second * 100.0 / total) << "\n";
        }

        if (cs != t - 1) cout << "\n"; // 組與組之間印一個空行
    }

    return 0;
}
