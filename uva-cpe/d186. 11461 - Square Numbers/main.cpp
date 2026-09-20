#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    while (cin >> a >> b){
        if (a == 0 && b == 0) break;
        int c = 0;
        for (int i = a; i <= b; i ++){
            for (int j = 1; j <= sqrt(i); j ++){
                if(j * j == i){
                    c++;
                    break;
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}
