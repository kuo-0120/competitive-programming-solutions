#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j;
    while (cin >> i >> j){
        int maximum = 0;
        cout << i << " " << j << " " ;
        if(i > j) swap(i, j);
        for (int n = i; n <= j; n ++){
            int c = 0;
            long long tmp = n;
            while (tmp > 0){
                c ++;
                if(tmp == 1) break;
                if(tmp % 2){
                    tmp = 3 * tmp + 1;
                }else{
                    tmp /= 2;
                }
            }
            if(c > maximum) maximum = c;
        }
        cout << maximum << endl;
    }
    return 0;
}
