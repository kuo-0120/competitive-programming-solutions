#include <bits/stdc++.h>
using namespace std;

int main() {
    double arr[8];
    while (cin >> arr[0]) { // 先讀第一個，如果讀不到就結束
        for (int i = 1; i < 8; i++) cin >> arr[i];

        // 四個輸入點
        double x1 = arr[0], y1 = arr[1];
        double x2 = arr[2], y2 = arr[3];
        double x3 = arr[4], y3 = arr[5];
        double x4 = arr[6], y4 = arr[7];
		double dx, dy;
        // 判斷哪兩個點相同，套公式 D = B + C - A
        if (x1 == x3 && y1 == y3) {         // P1 == P3
            dx = x2 + x4 - x1;
            dy = y2 + y4 - y1;
        } else if (x1 == x4 && y1 == y4) {  // P1 == P4
            dx = x2 + x3 - x1;
            dy = y2 + y3 - y1;
        } else if (x2 == x3 && y3 == y3) {  // P2 == P3
            dx = x1 + x4 - x2;
            dy = y1 + y4 - y2;
        } else {                         // P2 == P4
            dx = x1 + x3 - x2;
            dy = y1 + y3 - y2;
        }

        cout << fixed << setprecision(3) << dx << " " << dy << "\n";
    }
    return 0;
}

