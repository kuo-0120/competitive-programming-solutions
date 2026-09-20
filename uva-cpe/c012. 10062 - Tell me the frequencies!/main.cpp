#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    bool first_case = true;           // 控制組與組之間空一行
    while (getline(cin, s)) {
        int arr[256] = {0};           // ASCII 0..255
        for (unsigned char c : s) {
            arr[c]++;
        }

        if (!first_case) cout << '\n';
        first_case = false;

        // 依「頻率小到大；同頻率 ASCII 大到小」輸出
        while (true) {
            int minFreq = INT_MAX;
            int idx = -1;
            for (int i = 0; i < 256; ++i) {
                if (arr[i] > 0) {
                    if (arr[i] < minFreq || (arr[i] == minFreq && i > idx)) {
                        minFreq = arr[i];
                        idx = i;      // 若同頻率，取較大的 ASCII
                    }
                }
            }
            if (idx == -1) break;     // 全部輸出完了

            cout << idx << ' ' << arr[idx] << '\n';
            arr[idx] = 0;             // 清掉，避免重複輸出
        }
    }
    return 0;
}
