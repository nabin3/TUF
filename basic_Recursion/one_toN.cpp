#include<iostream>
using namespace std;

void one_N(int i, int n) {
	if (i > n) return;
	cout << i << " ";
	one_N(i+1, n);
}

int main() {
	int n;
	cout << "until which number you want to print: ";
	cin >> n;
	one_N(0, n);
}
