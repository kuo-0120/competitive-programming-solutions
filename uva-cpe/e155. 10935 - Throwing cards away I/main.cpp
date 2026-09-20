#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n == 0) break;
        queue<int> q;
        for (int i = 1; i <= n; i++) q.push(i);

        vector<int> discarded;

        while (q.size() > 1) {
            discarded.push_back(q.front());
            q.pop();

            q.push(q.front());
            q.pop();
        }

        // 輸出丟掉的牌
        cout << "Discarded cards:";
        if (!discarded.empty()) {
            cout << " " << discarded[0];
            for (int i = 1; i < discarded.size(); i++) {
                cout << ", " << discarded[i];
            }
        }
        cout << endl;

        // 輸出最後剩下的牌
        cout << "Remaining card: " << q.front() << endl;
    }
    return 0;
}
