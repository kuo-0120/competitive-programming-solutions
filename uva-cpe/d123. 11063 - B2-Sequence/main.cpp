#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, caseNum = 0;
    while (cin >> n) {
        vector<int> arr(n);
        caseNum++;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        bool isB2 = true;

        // (1) 檢查是否正整數且嚴格遞增
        if (arr[0] < 1) isB2 = false;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i + 1] <= arr[i] || arr[i + 1] < 1) {
                isB2 = false;
                break;
            }
        }

        // (2) 檢查 bi + bj 是否唯一
        if (isB2) {
            set<int> sums;
            for (int i = 0; i < n; i++) {
                for (int j = i; j < n; j++) { // i <= j
                    int s = arr[i] + arr[j];
                    if (sums.count(s)) { // 如果已經存在，代表重複
                        isB2 = false;
                        break;
                    }
                    sums.insert(s);
                }
                if (!isB2) break;
            }
        }

        // (3) 輸出結果
        cout << "Case #" << caseNum << ": ";
        if (isB2)
            cout << "It is a B2-Sequence.\n\n";
        else
            cout << "It is not a B2-Sequence.\n\n";
    }
    return 0;
}
