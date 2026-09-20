#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    if (!(cin >> T)) return 0;
    for (int cs = 1; cs <= T; ++cs) {
        int N;
        cin >> N;

        unordered_map<string, int> needDays;
        for (int i = 0; i < N; ++i) {
            string subj;
            int days;
            cin >> subj >> days;
            needDays[subj] = days;
        }

        int D;
        cin >> D;
        string target;
        cin >> target;

        cout << "Case " << cs << ": ";

        bool found = (needDays.find(target) != needDays.end());
        if (!found) {
            cout << "Do your own homework!" << endl;
        } else {
            int need = needDays[target];
            if (need <= D) {
                cout << "Yesss" << endl;
            } else if (need <= D + 5) {
                cout << "Late" << endl;
            } else {
                cout << "Do your own homework!" << endl;
            }
        }

    }
    return 0;
}
