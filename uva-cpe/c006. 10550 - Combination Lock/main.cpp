#include <bits/stdc++.h>

using namespace std;

int main()
{
    int start, a, b, c;
    while (cin >> start >> a >> b >> c){
        if (start == 0 && a == 0 && b == 0 && c == 0) break;
        int total = 1080;
        total += (start - a + 40) % 40 * 9;
        total += (b - a + 40) % 40 * 9;
        total += (b - c + 40) % 40 * 9;
        cout << total << endl;
    }
    return 0;
}
