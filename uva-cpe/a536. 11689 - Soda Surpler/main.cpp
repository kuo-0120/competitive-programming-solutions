#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t --){
        int e, f, c;
        cin >> e >> f >> c;
        int total = 0, emp;
        emp = e + f;
        while (emp >= c){
            total += emp / c;
            emp = emp / c + emp % c;
        }
        cout << total << endl;
    }
    return 0;
}
