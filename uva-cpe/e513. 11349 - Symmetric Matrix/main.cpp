#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    int c = 0;

    while (t--) {
        cout << "Test #" << ++c << ": ";

        string tag;  // 應讀到 "N"
        char eq;     // 應讀到 '='
        int n;
        cin >> tag >> eq >> n;

        int arr[n][n];
        bool symmetric = true;

        // 讀入並檢查非負
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> arr[i][j];
                if (arr[i][j] < 0) symmetric = false;  // 規則1：不得為負
            }
        }

        // 中心對稱檢查（規則2）
        for (int i = 0; i < n && symmetric; ++i) {
            for (int j = 0; j < n; ++j) {
                if (arr[i][j] != arr[n - 1 - i][n - 1 - j]) {
                    symmetric = false;
                    break;
                }
            }
        }

        if (symmetric) {
            cout << "Symmetric.\n";
        } else {
            cout << "Non-symmetric.\n";
        }
    }
    return 0;
}
