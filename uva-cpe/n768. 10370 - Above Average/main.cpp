#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n --){
        int student;
        cin >> student;
        int arr[student];
        int total = 0;
        double avg;
        for(int i = 0; i < student; i ++){
            cin >> arr[i];
            total += arr[i];
        }
        avg = total / student;
        int high = 0;
        double ans;
        for(int i = 0; i < student; i ++){
            if(arr[i] > avg){
                high ++;
            }
        }
        ans = (double(high) / student) * 100;
        cout << fixed << setprecision(3) << ans << "%" << endl;

    }
    return 0;
}
