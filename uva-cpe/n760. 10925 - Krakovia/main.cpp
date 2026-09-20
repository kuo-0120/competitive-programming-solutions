#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, f, c = 0;
    while (cin >> n >> f){
        c ++;
        if(n == 0 && f == 0) break;
        long long total = 0, money;
        while (n --){
            cin >> money;
            total += money;
        }
        cout << "Bill #" << c << " costs " << total << ": each friend should pay " << total/f << endl;
        cout << endl;
    }
    return 0;
}
