#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q, c = 1;
    while (cin >> n >> q){
        cout << "CASE# " << c << ":" << endl;
        c ++;
        if (n == 0 && q == 0) break;
        int rock[n], check[q];
        for (int i = 0; i < n; i ++){
            cin >> rock[i];
        }
        for (int i = 0; i < q; i ++){
            cin >> check[i];
        }
        sort(rock,rock+n);
        bool checked = false;
        for (int i = 0; i < q ; i++){
            for (int j = 0; j < n; j ++){
                if (check[i] == rock[j]){
                    cout << check[i] << " found at " << j+1 << endl;
                    checked = true;
                    break;
                }
            if(!checked) cout << check[i] << " not found" << endl;
            }
        }
    }
    return 0;
}
