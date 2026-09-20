#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n == 0) break; // 0 表示結束

        int c = 0;       // 計算不同質因數數量
        int tmp = n;     // 複製 n 來進行分解

        for (int i = 2; i * i <= tmp; i++) {
            if (tmp % i == 0) {
                c++; // 找到一個質因數
                while (tmp % i == 0) {
                    tmp /= i; // 除盡這個質因數
                }
            }
        }

        if (tmp > 1) c++; // 如果最後剩下的 >1，它本身是質數

        cout << n << " : " << c << endl;
    }
    return 0;
}
