#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        while (cin >> n){
            int arr[10] = {0};
            for(int i = 1; i <= n; i++){
                int tmp = i;
                while (tmp > 0){
                    arr[tmp % 10] ++;
                    tmp /= 10;
                }
            }
            for (int i = 0; i < 10; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
