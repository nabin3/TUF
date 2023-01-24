/*#include<iostream>
using namespace std;

void ntoOne(int i) {
	cout << i << " ";
	if (i < 1) return;
	ntoOne(--i);
}

int main() {
	int n;
	cout << "From which number you want to print to 0: ";
	cin >> n;
	ntoOne(n);
}*/


// using backtracking

#include<iostream>
using namespace std;

void ntoOne(int i, int n) {
	if (i > n) return;
	ntoOne(i + 1, n);
	cout << i << " ";
}
int main() {
	int n;
	cout << "Enter the number from which you want to print until0 ";
	cin >> n;
	ntoOne(0, n);
	cout << endl;
}
