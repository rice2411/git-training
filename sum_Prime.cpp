#include <bits/stdc++.h>
using namespace std;
bool check_Prime(int n){
	if (n == 1) return false;
	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int n, sum = 0;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
		if (check_Prime(a[i])){
			sum += a[i];
		}
	}
	cout << sum << endl;
	return 0;
}
