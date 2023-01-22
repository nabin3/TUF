/*#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	// reading array
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	// precomputing 
	int hashh[13] = {0}; // assuming 12 is the maximum number the input array can hold, so we take hashh array size of 13
	for (int i = 0; i < n; i++) {
		hashh[arr[i]] += 1;
	}

	int q;
	cin >> q;
	while (q--) {
		int number;
		cin >> number;
		//fetching
		cout << hashh[number] << endl;
	}
}*/

#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	// reading array
	for (int i = 0; i < n; i++) {
		cin >> arr[i]; 		//mpp[arr[i]]++; this precomputing can also be done in this for loop
	}
	
	// precomputing 
	map<int, int> mpp; 	// things can be done in unordered map also like unordered_map<int, int> mpp;
	for (int i = 0; i < n; i++) {
		mpp[arr[i]]++;
	}

	// iterating on map
	for (auto it : mpp) {
		cout << it.first << "<-" << it.second;
	}
	int q;
	cin >> q;
	while (q--) {
		int number;
		cin >> number;
		//fetching
		cout << mpp[number] << endl;
	}
}
