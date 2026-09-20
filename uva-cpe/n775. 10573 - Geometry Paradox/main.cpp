#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // 忽略換行符，避免第一次 getline 讀到空行

    double pi = acos(-1);

    while (n--) {
        string line;
        getline(cin, line);
        if (line.empty()) { // 如果讀到空行，繼續下一輪
            n++;
            continue;
        }

        stringstream ss(line);
        vector<double> nums;
        double x;
        while (ss >> x) nums.push_back(x);

        if (nums.size() == 1) {
            // 只給 t，計算 r1*r2 = (t/2)^2
            double t = nums[0];
            double area = pi * (t * t / 2.0);
            cout << fixed << setprecision(4) << area << endl;
            continue;
        }

        double r1 = nums[0], r2 = nums[1];
        // 大圓半徑 R = r1 + r2
        double R = r1 + r2;
        double area = pi * (R * R - r1 * r1 - r2 * r2);

        cout << fixed << setprecision(4) << area << endl;
    }
    return 0;
}
