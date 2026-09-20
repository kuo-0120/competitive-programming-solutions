#include <bits/stdc++.h>

using namespace std;

int GCD(int a, int b){
    int ans;
    if (a > b) swap(a,b);
    for(int i = 1; i <= a; i++){
        if(a % i == 0 && b % i == 0){
            ans = i;
        }
    }
    return ans;
}

int main()
{
    int n;
    while (cin >> n){
        if (n == 0) break;
        int G = 0;
        for (int i = 1; i < n; i++){
            for(int j = i+1; j <= n; j++){
                G += GCD(i, j);
            }
        }
        cout << G << endl;
    }
    return 0;
}
