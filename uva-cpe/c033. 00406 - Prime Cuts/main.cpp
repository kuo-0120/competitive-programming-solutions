#include <bits/stdc++.h>
using namespace std;

// dep() 用來判斷質數（本題定義 1 也算質數）
// 如果 a 是質數 → 回傳 a
// 如果 a 不是質數 → 回傳 0
int dep(int a){
    int b = 1; // b 用來記錄最大因數（不包含自己）
    for(int i = 1; i < a; i++){    // 從 1 到 a-1
        if(a % i == 0) b = i;      // 如果能整除，更新 b
    }
    // 如果最大因數是 1，代表除了 1 和自己外沒有其他因數 → 質數
    if(b == 1) return a;
    else return 0;                 // 否則不是質數
}

int main(){
    int n, c;
    while(cin >> n >> c){  // 讀入 N 和 C，直到 EOF
        cout << n << ' ' << c << ":";

        int data[10000], count = 0; // data[] 存質數清單，count 計數
        for(int i = 1; i <= n; i++){
            if(dep(i) != 0)         // dep(i) ≠ 0 表示是質數
                data[count++] = i;  // 放進質數清單
        }

        int mid = count / 2;        // 中間位置（0-based 的一半）

        // 如果要求輸出的範圍超過兩端，則直接輸出全部質數
        if(mid + c > count || mid - c < 0){
            for(int i = 0; i < count; i++){
                cout << ' ' << data[i];
            }
        }else{
            // K 是偶數 → 取 2*C 個數
            if(count % 2 == 0){
                for(int i = mid - c; i < mid + c; i++)
                    cout << ' ' << data[i];
            }
            // K 是奇數 → 取 (2*C - 1) 個數
            else{
                for(int i = mid - c + 1; i < mid + c; i++)
                    cout << ' ' << data[i];
            }
        }

        cout << endl << endl; // 每組測資後空一行
    }

    return 0;
}
