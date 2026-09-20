#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // 丟掉換行符號

    map<string,int> cnt;

    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);

        stringstream ss(line);
        string country;
        ss >> country;

        cnt[country]++; // 累計數量
    }

    for (auto &p : cnt) {
        cout << p.first << " " << p.second << "\n";
    }

    return 0;
}
