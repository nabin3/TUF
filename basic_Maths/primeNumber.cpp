#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin >> n;
	int cnt = 0;
	for (int i = 1; i*i <= n; i++) { 	// time_cplexity is O(sqrt(n)
		if (n % i == 0) {
			cnt++;
			if ((n/i) != i) cnt++;
		}
	}

	if (cnt == 2) cout << "true";
	else cout << "false";

}

