#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int total = 0;
        int empty = n; // 初始空罐數量就是買的瓶數

        // 喝掉初始買的 N 瓶
        total += n;

        // 模擬用空罐兌換
        while (empty >= 3) {
            int newCola = empty / 3;   // 可以換到的新可樂數量
            total += newCola;
            empty = newCola + (empty % 3); // 喝完又有空罐 + 剩下的空罐
        }

        // 如果最後剩 2 個空罐，就借 1 個再喝一瓶
        if (empty == 2) {
            total += 1; // 再喝一瓶
            // 喝完之後有 3 個空罐，還掉 1 個給朋友，自己沒有空罐了
        }

        cout << total << "\n";
    }
    return 0;
}
