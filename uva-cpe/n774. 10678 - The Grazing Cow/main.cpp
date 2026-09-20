#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n --){
        int d, l;
        cin >> d >> l;
        double a = l / 2.0;
        double b = sqrt(pow(l/2.0, 2)-pow(d/2.0, 2));
        double A = acos(-1) * a * b;
        cout << fixed << setprecision(3) << A << endl;
    }
    return 0;
}
