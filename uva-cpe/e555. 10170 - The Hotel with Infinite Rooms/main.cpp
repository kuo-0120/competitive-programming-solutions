#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long s, d;
    while (cin >> s >> d){
        long long day = 0, people;
        for (int i = s; true; i ++){
            day += i;
            if (day >= d){
                people = i;
                break;
            }
        }
        cout << people << endl;
    }
    return 0;
}
