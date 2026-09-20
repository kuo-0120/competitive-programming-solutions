#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a;
    const double pi = acos(-1.0);
    while (cin >> a) {
        double square = 2*a*a*(1-pi/4)-a*a*(1-pi/3+sqrt(3)/4);
        double dot = a*a*(1-pi/4)-2*square;
        double stripe = a*a-4*dot-4*square;

        cout << fixed << setprecision(3)
             << stripe << " " << 4*dot << " " << 4*square << endl;
    }

    return 0;
}
