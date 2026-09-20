#include <iostream>
#include <algorithm> // 要記得引入這個標頭檔
using namespace std;

int main()
{
    int t, c = 1;
    cin >> t;
    while (t--) {
        int arr[3];
        for (int i = 0; i < 3; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + 3); // 修正這裡，加上範圍
        cout << "Case " << c << ": " << arr[1] << endl; // 輸出中間的那個數
        c++;
    }
    return 0;
}
