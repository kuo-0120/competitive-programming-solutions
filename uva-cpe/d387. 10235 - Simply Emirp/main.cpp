#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i ++) {
        if (n % i == 0) return false;
    }
    return true;
}

int reverse_int(int n) {
    int r = 0;
    while (n > 0) {
        r = r * 10 + (n % 10);
        n /= 10;
    }
    return r;
}

bool is_emirp(int n) {
    if (!is_prime(n)) return false;
    int rev = reverse_int(n);
    if (rev == n) return false;        // 排除回文質數（如 11、101）
    return is_prime(rev);
}

int main() {
    int n;
    while (cin >> n) {
        if (is_emirp(n)) {
            cout << n << " is emirp.\n";
        } else if (is_prime(n)) {
            cout << n << " is prime.\n";
        } else {
            cout << n << " is not prime.\n";
        }
    }
    return 0;
}
