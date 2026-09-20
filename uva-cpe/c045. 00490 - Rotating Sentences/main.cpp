#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> lines;
    string s;
    size_t maxLen = 0;

    // 讀到 EOF（最多 100 列，每列最多 100 字元）
    while (getline(cin, s)) {
        lines.push_back(s);
        maxLen = max(maxLen, s.size());
        if (lines.size() >= 100) break; // 題目上限，保險
    }

    // 旋轉輸出：順時針 90 度
    // 輸出共 maxLen 行；每行從「最後一列」往上印到「第一列」
    for (int col = 0; col < maxLen; ++col) {
        for (int row = (int)lines.size() - 1; row >= 0; --row) {
            if (col < lines[row].size()) cout << lines[row][col];
            else                          cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}
