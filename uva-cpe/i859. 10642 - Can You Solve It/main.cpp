#include <bits/stdc++.h>
using namespace std;

long long index_on_path(long long x, long long y) {
    long long s = x + y;                 // 對角線編號
    return s * (s + 1) / 2 + x;          // 在整條路徑上的順序編號
}

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        long long a = index_on_path(x1, y1);
        long long b = index_on_path(x2, y2);
        long long ans = llabs(b - a);

        cout << "Case " << i << ": " << ans << "\n";
    }
    return 0;
}
