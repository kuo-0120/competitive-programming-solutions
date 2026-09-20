#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while (cin >> n){
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int low = arr[(n - 1) / 2];
        int high = arr[n / 2];
        int mid = low;
        int cnt = 0;
        for (int i = 0; i < n; i++){
            if (low <= arr[i] && arr[i] <= high) cnt ++;
        }
        int ways = high - low + 1;

        cout << mid << " " << cnt << " " << ways << endl;
    }
    return 0;
}
