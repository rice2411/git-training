#include <bits/stdc++.h>
using namespace std;
int MaxInArray(int a[], int n){
	int max = a[0];
	for (int i = 0; i < n; i++){
		if (a[i] > max) max = a[i];
	}
	return max;
}

int CountMaxNumInArray(int a[], int n, int max){
	int count = 0;
	for (int i = 0; i < n; i++){
		if (a[i] == max) count++;
	}
	return count;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	cout << MaxInArray(a, n) << " " << CountMaxNumInArray(a, n, MaxInArray(a,n));
	return 0;
}
