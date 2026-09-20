#include <bits/stdc++.h>
using namespace std;

const int MAX = 105;                 // n,m ≤ 100，多留一圈緩衝
char g[MAX][MAX];                    // 地圖（含外圈）
int  cnt[MAX][MAX];                  // 鄰雷數（含外圈）

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    int tc = 0;
    while (cin >> n >> m) {
        if (n == 0 && m == 0) break;

        // 讀入：把有效區域放在 [1..n][1..m]
        // 同時把緩衝區清空
        for (int i = 0; i < MAX; ++i) {
            for (int j = 0; j < MAX; ++j) {
                g[i][j] = '.';
                cnt[i][j] = 0;
            }
        }
        for (int i = 1; i <= n; ++i) {
            string row; cin >> row;
            for (int j = 1; j <= m; ++j) g[i][j] = row[j-1];
        }

        // 對每顆雷，直接把周圍八格的 cnt 加一（有緩衝不用邊界判斷）
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                if (g[i][j] == '*') {
                    for (int dr = -1; dr <= 1; ++dr) {
                        for (int dc = -1; dc <= 1; ++dc) {
                            if (dr == 0 && dc == 0) continue;
                            cnt[i + dr][j + dc]++;    // 鄰格 +1
                        }
                    }
                }
            }
        }

        if (tc++) cout << '\n';      // 測資間空一行
        cout << "Field #" << tc << ":\n";
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                if (g[i][j] == '*') cout << '*';
                else                 cout << cnt[i][j];
            }
            cout << '\n';
        }
    }
    return 0;
}
