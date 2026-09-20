#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool found = false;
        for(int i = 0; i * i <= n; ++i){
            for(int j = i; i*i + j*j <= n; ++j){
                for(int k = j; i*i + j*j + k*k <= n; ++k){
                    if(i*i + j*j + k*k == n){
                        cout << i << " " << j << " " << k << endl;
                        found = true;
                        goto END;
                    }
                }
            }
        }
        END:
        if(!found) cout << -1 << endl;
    }
    return 0;
}
