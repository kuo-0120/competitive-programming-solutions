#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, c = 0;
    while (cin >> n){
        if (n == 0) break;
        c ++;
        if (n == 1){
            cout << "Case " << c << ": 1" << endl;
        } else {
            bool found = false;
            for (int i = n; i > 0; i --){
                int sum = 0;
                for (int j = 1; j < n; j ++){
                    if (i % j == 0){
                        sum += j;
                    }
                }
                if (sum == n){
                    cout << "Case " << c << ": " << i << endl;
                    found = true;
                    break;
                }
            }
            if(!found) cout << "Case " << c << ": -1" << endl;
        }
    }
    return 0;
}
