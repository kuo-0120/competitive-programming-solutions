#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, c = 0;
    cin >> t;
    while (t --){
        c ++;
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i ++){
            cin >> arr[i];
        }
        int high = 0, low = 0;
        for (int i = 0; i < n-1; i ++){
            if(arr[i + 1] > arr[i]) high ++;
            if(arr[i + 1] < arr[i]) low ++;
        }
        cout << "Case " << c << ": " << high << " " << low << endl;
    }
    return 0;
}
