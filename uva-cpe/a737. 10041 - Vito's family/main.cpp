#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i ++){
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int mid = 0;
        mid = arr [n / 2];
        int dis = 0;
        for (int i = 0; i < n; i ++){
            dis += abs(arr[i] - mid);
        }
        cout << dis << endl;
    }
    return 0;
}
