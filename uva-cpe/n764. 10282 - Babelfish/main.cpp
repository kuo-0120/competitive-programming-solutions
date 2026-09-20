#include <bits/stdc++.h>
using namespace std;

int main() {
    // 使用 unordered_map（雜湊表）存字典：key 是外語單詞，value 是英文翻譯
    unordered_map<string, string> dictionary;

    string line, a, b;

    // 讀入字典部分，直到遇到空行為止
    while (getline(cin, line) && !line.empty()) {
        istringstream iss(line); // 拆解這行
        iss >> a >> b;           // a 是英文單詞，b 是外語單詞
        dictionary[b] = a;       // 建立「外語 → 英文」的對應關係
    }

    // 開始讀取訊息，這些是一行一個單字的外語訊息
    string s;
    while (cin >> s) {
        // 查詢這個外語單字是否在字典中
        if (dictionary.count(s)) {
            // 若在字典中，輸出對應的英文翻譯
            cout << dictionary[s] << endl;
        } else {
            // 否則輸出 "eh"
            cout << "eh" << endl;
        }
    }

    return 0;
}
