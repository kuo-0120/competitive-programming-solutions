#include <bits/stdc++.h>
using namespace std;

int main() {
    int S;
    if (!(cin >> S)) return 0;
    cout << fixed;
    cout << setprecision(4);
	const long double EPS = 1e-18L;
    while (S--) {
        int N, i;
        long double p;
        cin >> N >> p >> i;

		if (p <= EPS) {                // p≈0
            cout << "0.0000\n";
            continue;
        }

        long double q = 1.0 - p;
        long double numerator = pow(q, i - 1) * p;
        long double denominator = 1.0 - pow(q, N);
        long double ans = numerator / denominator;

        // 安全起見，夾限到 [0,1]
        if (ans < 0) ans = 0;
        if (ans > 1) ans = 1;

        cout << static_cast<double>(ans) << "\n";
    }
    return 0;
}
