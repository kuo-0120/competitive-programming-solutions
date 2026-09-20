#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int M, N, Q;
        cin >> M >> N >> Q;

        vector<string> grid(M);
        for (int i = 0; i < M; ++i) {
            cin >> grid[i];               // 每行 N 個字元
        }

        cout << M << " " << N << " " << Q << "\n";

        while (Q--) {
            int r, c;                     // 已經是 0-based
            cin >> r >> c;

            char ch = grid[r][c];
            int ans = 1;                  // 至少中心那一格
            int k = 1;                    // 半徑：1 表示邊長 3

            while (true) {
                // 邊界檢查：外圈四邊是否仍在矩形內
                if (r - k < 0 || r + k >= M || c - k < 0 || c + k >= N) break;

                bool ok = true;

                // 檢查新增加的外圈（上、下兩條邊）
                for (int j = c - k; j <= c + k && ok; ++j) {
                    if (grid[r - k][j] != ch) ok = false;   // 上邊
                    if (grid[r + k][j] != ch) ok = false;   // 下邊
                }
                // 檢查新增加的外圈（左、右兩條邊），避免角落重複檢查可無視
                for (int i = r - k; i <= r + k && ok; ++i) {
                    if (grid[i][c - k] != ch) ok = false;   // 左邊
                    if (grid[i][c + k] != ch) ok = false;   // 右邊
                }

                if (!ok) break;
                ans = 2 * k + 1;   // 成功擴張一圈，更新邊長
                ++k;               // 繼續往外擴
            }

            cout << ans << "\n";
        }
    }
    return 0;
}
