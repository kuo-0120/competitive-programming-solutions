#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int c = 1;
    while (cin >> s){
        cout << "Case " << c << ":" << endl;
        c ++;
        int n ;
        cin >> n;
        while (n--){
            int a, b;
            cin >> a >> b;
            int l = min(a,b);
            int r= max(a,b);
            bool same = true;
            for (int i = l; i <= r; i++){
                if (s[i] != s[l]){
                    same = false;
                    break;
                }
            }
            if (same) cout << "Yes" << endl;
            if (!same) cout << "No" << endl;
        }
    }
    return 0;
}
