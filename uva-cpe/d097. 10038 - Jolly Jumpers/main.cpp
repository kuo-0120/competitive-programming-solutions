#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    while (cin >> t){
        int arr[t];
        for (int i = 0; i < t; i ++){
            cin >> arr[i];
        }
        int d[t] = {0};
        for (int i = 0; i < t-1; i ++){
            int num = abs(arr[i+1] - arr[i]);
            d[num] ++;
        }
        bool jolly = true;
        for (int i = 1; i < t; i ++){
            if(d[i] == 0){
                jolly = false;
                break;
            }
        }
        if (jolly){
            cout << "Jolly" << endl;
        }else{
            cout << "Not jolly" << endl;
        }
    }
    return 0;
}
