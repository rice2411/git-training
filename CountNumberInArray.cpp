#include <bits/stdc++.h>
using namespace std;
void CountNumber(int a[], int n){
	sort(a, a+n);
	int max_Element = a[0];
	int max_Count = 1;
	int cur_Element = a[0];
	int cur_Count = 1;
	for (int i = 1; i < n; i++){
		if (a[i] == cur_Element){
			cur_Count++;
		} else{
			if (cur_Count > max_Count){
				max_Element = a[i-1];
				max_Count = cur_Count;
			}
			cur_Element = a[i];
			cur_Count = 1;
		}
	}
	if (cur_Count > max_Count){
		max_Element = cur_Element;
		max_Count = cur_Count;
	}
	cout << max_Element << " " << max_Count;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	CountNumber(a, n);
	return 0;
}
