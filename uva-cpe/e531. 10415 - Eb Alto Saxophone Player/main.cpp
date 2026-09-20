#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore();

    // 直接在 main 裡建立指法表
    map<char, vector<int>> fingerMap;
    fingerMap['c'] = {2,3,4,7,8,9,10};
    fingerMap['d'] = {2,3,4,7,8,9};
    fingerMap['e'] = {2,3,4,7,8};
    fingerMap['f'] = {2,3,4,7};
    fingerMap['g'] = {2,3,4};
    fingerMap['a'] = {2,3};
    fingerMap['b'] = {2};
    fingerMap['C'] = {3};
    fingerMap['D'] = {1,2,3,4,7,8,9};
    fingerMap['E'] = {1,2,3,4,7,8};
    fingerMap['F'] = {1,2,3,4,7};
    fingerMap['G'] = {1,2,3,4};
    fingerMap['A'] = {1,2,3};
    fingerMap['B'] = {1,2};

    while (t--) {
        string s;
        getline(cin, s);

        vector<int> count(11, 0);   // 統計每個手指
        vector<bool> prev(11, false);

        for (char note : s) {
            vector<bool> now(11, false);
            for (int f : fingerMap[note]) now[f] = true;

            for (int i = 1; i <= 10; i++) {
                if (!prev[i] && now[i]) count[i]++;
            }
            prev = now;
        }

        for (int i = 1; i <= 10; i++) {
            cout << count[i] << (i == 10 ? '\n' : ' ');
        }
    }

    return 0;
}
