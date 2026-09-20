#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c = 0;
    while (cin >> n){
        if (n == 0) break;
        cin.ignore(); // 吃掉那個換行符

        c++;
        cout << "Case " << c << ":" << endl;
        cout << "#include<string.h>" << endl;
        cout << "#include<stdio.h>" << endl;
        cout << "int main()" << endl;
        cout << "{" << endl;

        string s;
        for (int i = 0; i < n; i++){
            getline(cin, s);
            cout << "printf(\"";
            for (char ch : s) {
                if (ch == '"') cout << "\\\"";
                else if (ch == '\\') cout << "\\\\";
                else cout << ch;
            }
            cout << "\\n\");" << endl;
        }

        cout << "printf(\"\\n\");" << endl;
        cout << "return 0;" << endl;
        cout << "}" << endl;
    }
    return 0;
}
