#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while (cin >> n){
        double ratx, raty, dogx, dogy;
        cin >> ratx >> raty >> dogx >> dogy;
        bool escape = false;
        while (n --){
            double holex, holey;
            cin >> holex >> holey;
            double disrat = sqrt((holex - ratx) * (holex - ratx) + (holey - raty) * (holey - raty));
            double disdog = sqrt((holex - dogx) * (holex - dogx) + (holey - dogy) * (holey - dogy));
            if (disrat < 0.5 * disdog){
                cout << fixed << setprecision(3) << "The gopher can escape through the hole at (" << holex << "," << holey << ")." << endl;
                escape = true;
                break;
            }
        }
        if (!escape) {
            cout << "The gopher cannot escape." << endl;
        }
    }
    return 0;
}
