#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, c = 0;
    cin >> T;
    while (T --){
        c ++;
        cout << "Case " << c << ": " ;
        long long a, b, sum = 0;
        cin >> a >> b;
        for (int i = a; i <= b; i ++){
            if(i % 2) sum += i;
        }
        cout << sum << endl;
    }
    return 0;
}
