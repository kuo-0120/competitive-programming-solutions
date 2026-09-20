#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c = 0, t;
    while (cin >> t){
        c ++;
        long long arr[t];
        for (int i = 0; i < t; i ++){
            cin >> arr[i];
        }
        long long maximum = 0;
        for (int i = 0; i < t; i ++){
            long long tmp = arr[i];
            for (int j = i + 1; j < t; j ++){
                tmp *= arr[j];
                if (tmp > maximum) maximum = tmp;
            }
        }
        cout << "Case #" << c << ": The maximum product is " << maximum << "." << endl;
        cout << endl;
    }
    return 0;
}
