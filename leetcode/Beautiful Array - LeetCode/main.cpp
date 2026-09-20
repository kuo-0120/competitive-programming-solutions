#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> beautifulArray(int n) {
        vector<int> res = {1};

        while (res.size() < n) {
            vector<int> temp;

            // 奇數構造
            for (int x : res) {
                if (x * 2 - 1 <= n)
                    temp.push_back(x * 2 - 1);
            }

            // 偶數構造
            for (int x : res) {
                if (x * 2 <= n)
                    temp.push_back(x * 2);
            }

            res = temp; // 更新 res
        }

        return res;
    }
};

// 輔助函式：印出 vector
void printVector(const vector<int>& vec) {
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i];
        if (i != vec.size() - 1)
            cout << " ";
    }
    cout << endl;
}

// 主程式
int main() {
    int n;
    cout << "請輸入 n：";
    cin >> n;

    Solution sol;
    vector<int> result = sol.beautifulArray(n);

    cout << "Beautiful Array 為：";
    printVector(result);

    return 0;
}
