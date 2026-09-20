#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 2011（平年）各月的 doomsday 錨點（皆為 Monday）
    // 索引 0 是佔位，實際用 1..12
    int anchor[13] = {
        0,
        10, // Jan 10
        21, // Feb 21
        7,  // Mar 7
        4,  // Apr 4
        9,  // May 9
        6,  // Jun 6
        11, // Jul 11
        8,  // Aug 8
        5,  // Sep 5
        10, // Oct 10
        7,  // Nov 7
        12  // Dec 12
    };

    vector<string> Day = {
        "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"
    };

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int m, d;
        cin >> m >> d;
        int delta = d - anchor[m];                 // 與該月錨點的日數差
        int idx = ((delta % 7) + 7) % 7;           // 0..6，0 對應 Monday
        cout << Day[idx] << "\n";
    }
    return 0;
}
