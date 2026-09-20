#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n == 0) break;
        bool found = false;

        for (int y = 1; y <= 100; ++y) {  // y = i
            for (int x = y + 1; x <= 100; ++x) {  // x = j
                if (x * x * x - y * y * y == n) {
                    cout << x << " " << y << endl;
                    found = true;
                    break;  // 找到 y 最小的解就可以跳出
                }
            }
            if (found) break;
        }

        if (!found) {
            cout << "No solution" << endl;
        }
    }
    return 0;
}
