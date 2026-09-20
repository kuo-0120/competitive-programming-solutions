#include <bits/stdc++.h>
using namespace std;

// 計算從某個位置往某個方向能收集多少珠子
int countBeads(const string &s, int start, int step, int N) {
    int cnt = 0;
    char color = 'w'; // 尚未決定顏色
    int i = start;

    while (cnt < N) {
        char c = s[i];
        if (c != 'w') {
            if (color == 'w') color = c;       // 第一次遇到非白色，決定顏色
            else if (c != color) break;        // 遇到不同顏色，停止
        }
        cnt++;
        i += step;
    }
    return cnt;
}

int main() {
    int N;
    while (cin >> N) {
        string beads;
        cin >> beads;

        // 將字串接兩次，方便模擬環狀
        string s = beads + beads;
        int ans = 0;

        // 嘗試每個切口
        for (int i = 0; i < N; i++) {
            int left = countBeads(s, i + N - 1, -1, N);  // 從切口左邊往左
            int right = countBeads(s, i + N, 1, N);      // 從切口右邊往右
            ans = max(ans, min(N, left + right));        // 不可超過 N
        }

        cout << ans << "\n";
    }

    return 0;
}
