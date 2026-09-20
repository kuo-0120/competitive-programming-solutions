#include <bits/stdc++.h>
using namespace std;

// 盢俱计ぃ耞盢计跑Θ计
int reduceToSingleDigit(int num) {
    while (num >= 10) {
        int temp = 0;
        while (num > 0) {
            temp += num % 10;
            num /= 10;
        }
        num = temp;
    }
    return num;
}

// 璸衡稲薄计
int getLoveValue(const string& name) {
    int total = 0;
    for (char ch : name) {
        if (isalpha(ch)) {
            total += tolower(ch) - 'a' + 1;
        }
    }
    return reduceToSingleDigit(total);
}

int main() {
    string a, b;
    while (getline(cin, a) && getline(cin, b)) {
        int x = getLoveValue(a);
        int y = getLoveValue(b);
        if (x == 0 && y == 0) {
            cout << "0.00 %" << endl;
        } else {
            double love = (double(min(x, y)) / max(x, y)) * 100.0;
            cout << fixed << setprecision(2) << love << " %" << endl;
        }
    }
    return 0;
}
