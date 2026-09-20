#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    while (cin >> n >> m){
            unsigned long long a = 0, b = 1, temp;
            if (n == 0) cout << a % (1ULL << m) << endl;
            else if (n == 1) cout << b % (1ULL << m) << endl;
            else{
                for(int i = 2; i <= n; i++){
                    temp = a + b;
                    a = b;
                    b = temp;
                }
                cout << b % (1ULL << m) << endl;
            }
    }
    return 0;
}
