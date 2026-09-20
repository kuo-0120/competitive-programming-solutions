#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    string a;
    while(cin >> a){
        if(a[0]=='-') break;
        if(a.size() > 2 && a[0]=='0' && (a[1]=='x' || a[1]=='X')){
            cout << stoi(a.substr(2), nullptr, 16) << endl;
        }else{
            int x = stoi(a);
            cout << "0x" << uppercase << hex << x << endl;
        }
    }
    return 0;
}
