#include <bits/stdc++.h>

using namespace std;

long long f(long long n){
    while (n > 9){
        long long sum = 0;
        while (n > 0){
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    return n;
}
int main()
{
    long long num;
    while (cin >> num){
        if (num == 0) break;
        cout << f(num) << endl;
    }
    return 0;
}
