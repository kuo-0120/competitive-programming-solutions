#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    if (!(cin >> T)) return 0;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ← 吃掉第一行的換行

    int arr[26] = {0}; // 初始化

    while (T--) {
        string s;
        getline(cin, s);              // 讀一整行
        for (unsigned char ch : s) {
            // 只認 ASCII 英文字母，避免 isalpha 的區域性/擴展字元問題
            if (('A' <= ch && ch <= 'Z') || ('a' <= ch && ch <= 'z')) {
                ch = (unsigned char)toupper(ch);
                arr[ch - 'A']++;     // 這時一定是 0..25
            }
        }
    }

    // 重複取目前最大者；同頻按字母小者優先
    for (int k = 0; k < 26; ++k) {
        int bestCnt = -1;   // 目前最大次數
        int bestIdx = -1;   // 對應 A..Z -> 0..25
        for (int j = 0; j < 26; ++j) {
            if (arr[j] == 0) continue;
            if (arr[j] > bestCnt || (arr[j] == bestCnt && j < bestIdx)) {
                bestCnt = arr[j];
                bestIdx = j;
            }
        }
        if (bestIdx == -1) break; // 沒有剩下的字母了
        cout << char('A' + bestIdx) << ' ' << bestCnt << "\n";
        arr[bestIdx] = 0; // 清零，下一輪不再選到它
    }

    return 0;
}
