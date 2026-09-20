#include <bits/stdc++.h>

using namespace std;

int fib(int n){
    int cache[n + 1];
    cache[0] = 0;
    cache[1] = 1;
    for (int i = 2; i <= n; i ++){
        cache[i] = cache[i - 1] + cache[i - 2];
    }
    return cache[n];
}

int main()
{
    int T;
    cin >> T;
    while (T --){
        int num;
        cin >> num;
        cout << num << " = ";
        int maximum = 2;
        while (fib(maximum) <= num) maximum ++;
        maximum --;
        while (maximum > 1){
            if(fib(maximum) <= num){
                cout << 1;
                num -= fib(maximum);
            }else{
                cout << 0;
            }
            maximum --;
        }
        cout << " (fib)" << endl;
    }
    return 0;
}
