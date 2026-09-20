#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n && n) {
        // 初始面向
        int top = 1, bottom = 6, north = 2, south = 5, west = 3, east = 4;

        for (int k = 0; k < n; ++k) {
            string cmd;
            cin >> cmd;

            if (cmd == "north") {
                // 新 top = 舊 south；新 bottom = 舊 north；新 north = 舊 top；新 south = 舊 bottom
                int ntop = south, nbottom = north, nnorth = top, nsouth = bottom;
                top = ntop; bottom = nbottom; north = nnorth; south = nsouth;
            } else if (cmd == "south") {
                // 與 north 相反
                int ntop = north, nbottom = south, nnorth = bottom, nsouth = top;
                top = ntop; bottom = nbottom; north = nnorth; south = nsouth;
            } else if (cmd == "east") {
                // 新 top = 舊 west；新 bottom = 舊 east；新 east = 舊 top；新 west = 舊 bottom
                int ntop = west, nbottom = east, neast = top, nwest = bottom;
                top = ntop; bottom = nbottom; east = neast; west = nwest;
            } else if (cmd == "west") {
                // 與 east 相反
                int ntop = east, nbottom = west, neast = bottom, nwest = top;
                top = ntop; bottom = nbottom; east = neast; west = nwest;
            }
        }
        cout << top << "\n";
    }
    return 0;
}
