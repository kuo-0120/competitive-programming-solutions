#include <bits/stdc++.h>
using namespace std;

// 判斷是否為迴文時間
bool isPalindrome(int H, int M) {
    stringstream mm;
    mm << setw(2) << setfill('0') << M; // 分鐘補 0
    string minute = mm.str();

    string trimmed;
    if (H == 0) {
        // HH=0 → 只取分鐘，但去掉前導零
        trimmed = to_string(M);
    } else {
        // HH≠0 → 小時去前導零 + 分鐘補 0
        trimmed = to_string(H) + minute;
    }

    string rev = trimmed;
    reverse(rev.begin(), rev.end());
    return trimmed == rev;
}


int main() {
    int t;
    cin >> t;

    while (t--) {
        string timeStr;
        cin >> timeStr;

        int H = stoi(timeStr.substr(0, 2));
        int M = stoi(timeStr.substr(3, 2));

        // 不斷加 1 分鐘直到找到下一個迴文時間
        while (true) {
            M++;
            if (M == 60) {
                M = 0;
                H++;
                if (H == 24) H = 0;
            }

            if (isPalindrome(H, M)) {
                // ✅ 輸出結果時也要補 0
                cout << setw(2) << setfill('0') << H << ":"
                     << setw(2) << setfill('0') << M << "\n";
                break;
            }
        }
    }
    return 0;
}
