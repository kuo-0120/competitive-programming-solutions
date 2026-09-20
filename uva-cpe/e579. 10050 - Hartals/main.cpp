#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t --){
        int n, p;
        cin >> n >> p;
        int arr[p];
        for(int i = 0; i < p; i ++){
            cin >> arr[i];
        }
        int cnt = 0;
        for (int i = 1; i <= n; i ++){
            if (i % 7 == 6 || i % 7 == 0) continue;
            for (int j = 0; j < p; j ++){
                if(i % arr[j] == 0){
                    cnt ++;
                    break;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
