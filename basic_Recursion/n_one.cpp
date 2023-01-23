#include<iostream>
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
}
