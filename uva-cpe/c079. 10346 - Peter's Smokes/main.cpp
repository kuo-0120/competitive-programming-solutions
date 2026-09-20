#include <iostream>

using namespace std;

int main()
{
    int n, k;
    while (cin >> n >> k){
        int ans = n;
        while (n >= k){
            ans += n / k;
            n = n % k + n /k;
        }
        cout << ans << endl;
    }
    return 0;
}
