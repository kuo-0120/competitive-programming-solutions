#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m;
    while (cin >> n >> m) {
        // 防呆：n<1 或 m<2（0或1）都不可能形成合法序列
        if (n < 1 || m < 2) {
            cout << "Boring!\n";
            continue;
        }

        vector<long long> seq;
        bool ok = true;

        while (true) {
            seq.push_back(n);        // 先放入目前值
            if (n == 1) break;       // 到 1 就成功結束
            if (n % m != 0) {        // 不能整除 → 失敗
                ok = false;
                break;
            }
            n /= m;                  // 繼續下一步
        }

        if (!ok) {
            cout << "Boring!\n";
        } else {
            for (size_t i = 0; i < seq.size(); ++i) {
                if (i) cout << ' ';
                cout << seq[i];
            }
            cout << '\n';
        }
    }
    return 0;
}
