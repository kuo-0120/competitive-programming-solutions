#include <bits/stdc++.h>
using namespace std;

void bin(int n,int& c){
    if(n / 2 != 0){
        bin(n/2, c);
    }
    if(n % 2 == 1){
        c ++;
    }
    cout << n % 2;
}

int main(){
    int n;
    while(cin >> n){
        if(n == 0) break;
        int c = 0;
        cout << "The parity of ";
        bin(n, c);
        cout << " is " << c << " (mod 2)." << endl;
    }
    return  0;
}
