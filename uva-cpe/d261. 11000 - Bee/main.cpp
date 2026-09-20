#include <iostream>
using namespace std;

int main() {
    int y;
    while (cin >> y) {
        if (y == -1) break;

        long long male = 0;   // 初始公蜂
        long long female = 1; // 初始母蜂 (永生母蜂)

        for (int i = 0; i < y; i++) {
            long long newMale = male + female; // 新增公蜂 = 舊公蜂+舊母蜂
            long long newFemale = 1 + male; // 新增母蜂 = 舊母蜂+舊公蜂
            male = newMale;  // 舊公蜂死去，新的公蜂取代
            female = newFemale; // 母蜂累加
        }

        cout << male << " " << male + female << endl;
    }
    return 0;
}
