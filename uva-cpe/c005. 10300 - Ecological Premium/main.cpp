#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t --){
        int f;
        cin >> f;
        int result = 0;
        while (f --){
            int a, b, c;
            cin >> a >> b >> c;
            result += a * c;
        }
        cout << result << endl;
    }
    return 0;
}
