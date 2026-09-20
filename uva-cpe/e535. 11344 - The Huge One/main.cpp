#include <bits/stdc++.h>

using namespace std;

int mod(string s, int num){
    int r = 0;
    for(char c : s){
        r = (r * 10 + (c - '0')) % num;
    }
    return r;
}

int main()
{
    int t;
    cin >> t;
    while (t --){
        string s;
        cin >> s;
        int n;
        cin >> n;
        int arr[n];
        bool wonderful = true;
        for (int i = 0; i < n; i ++){
            cin >> arr[i];
        }
        for (int i = 0; i < n; i ++){
            if (mod(s,arr[i]) != 0){
                wonderful = false;
                break;
            }
        }
        if(wonderful) cout << s << " - Wonderful." << endl;
        if(!wonderful) cout << s << " - Simple." << endl;
    }
    return 0;
}
