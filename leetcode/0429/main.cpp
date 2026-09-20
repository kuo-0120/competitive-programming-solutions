#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        long long f, total = 0;
        cin >> f;
        long long arr[3];
        while (f--) {
            for (int i = 0; i < 3; i++) {
                cin >> arr[i];
            }
            total += arr[0] * arr[2]; // 只用面積跟環保指數
        }
        cout << total << endl; // 記得每組要換行！
    }
    return 0;
}
