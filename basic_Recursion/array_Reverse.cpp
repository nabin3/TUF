#include<bits/stdc++.h>
using namespace std;

void reverseArray(int l, int r, int arr[]) {
	if (l >= r) return;
	swap(arr[l], arr[r]);
	reverseArray(l+1, r-1, arr);
}

int main() {
	int n;
	cout << "Enter the size of Array: ";
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cout << "Enter a number: ";
		cin >> arr[i];
	}
	reverseArray(0, n-1, arr);
	cout << "Afeter reversing the array: "; 
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

/* with one pointer
void reverseArray(int i, int arr[], int n) { // n is size of the array
	if (i >= n/2) return;
	swap(arr[i], arr[n-i-1]);
	reverseArray(i+1, arr, n);
}*/
