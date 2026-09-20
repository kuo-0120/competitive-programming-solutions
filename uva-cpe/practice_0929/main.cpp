#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h, m;
    char c;
    while (cin >> h >> c >> m){
        if(h == 0 && m == 00) break;
        h %= 12;
        double minute = m * 6.0;
        double hour = h *30.0 + m * 0.5;
        double degree = fabs(hour - minute);
        double ans = min(degree, 360.0 - degree);
        cout << fixed << setprecision(3) << ans << endl;
    }
    return 0;
}
