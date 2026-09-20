#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int winner, seed, c = 0;
        bool ok = true;  // 判斷是否成功完成比賽

        while (n > 1) {
            winner = n / m;
            seed = n % m;
            if (winner == 0) {
                cout << "cannot do this" << endl;
                ok = false;
                break;
            }
            n = winner + seed;
            c += winner;
        }

        if (ok)
            cout << c << endl;
    }
    return 0;
}
