#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c = 0;
    while (cin >> n) {
        if (n == 0) break;  // 結束條件

        c++;
        cout << "Case " << c << ":";

        int arr[10][10];  // 最大10x10
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin >> arr[i][j];
            }
        }

        int layers = (n + 1) / 2;  // 同心正方形層數

        for (int layer = 0; layer < layers; layer++) {
            int sum = 0;
            int start = layer;
            int end = n - 1 - layer;

            // 上邊
            for (int j = start; j <= end; j++)
                sum += arr[start][j];

            // 下邊
            if (end != start) {
                for (int j = start; j <= end; j++)
                    sum += arr[end][j];
            }

            // 左邊（不含角）
            for (int i = start + 1; i < end; i++)
                sum += arr[i][start];

            // 右邊（不含角）
            for (int i = start + 1; i < end; i++)
                sum += arr[i][end];

            cout << " " << sum;
        }

        cout << endl;
    }

    return 0;
}
