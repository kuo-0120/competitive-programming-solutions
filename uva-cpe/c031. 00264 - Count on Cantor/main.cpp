#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	while(cin >> n){
		cout << "TERM " << n << " IS ";
		int sum = 0, i = 0, l;
		while(sum < n){
			i ++;
			sum += i;
		}
		if(i % 2){
			l = i - (sum - n);
		}else{
			l = 1 + (sum - n);
		}
		cout << i + 1 - l << "/" << l << endl;
	}

return 0;
}
