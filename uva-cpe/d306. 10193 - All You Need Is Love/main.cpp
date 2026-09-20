#include <bits/stdc++.h>

using namespace std;

int GCD(int a, int b){
    int ans;
    if (a > b) swap(a, b);
    for(int i = 1; i <= a; i++){
        if(a % i == 0 && b % i == 0){
            ans = i;
        }
    }
    return ans;
}

int main() {
    int t;
    if (!(cin >> t)) return 0;
    for (int cnt = 1; cnt <= t; ++cnt) {
        string sa, sb;
        cin >> sa >> sb;

        long long a = stoll(sa, nullptr, 2);
        long long b = stoll(sb, nullptr, 2);

        cout << "Pair #" << cnt << ": ";
        if (GCD(a, b) > 1) {
            cout << "All you need is love!\n";
        } else {
            cout << "Love is not all you need!\n";
        }
    }
    return 0;
}

