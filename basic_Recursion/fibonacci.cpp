#include<iostream>
using namespace std;

int fibo(int n) {
	if (n <= 1) return n;
	return (fibo(n-1) + fibo(n-2));
}

int main() {
	cout << "Enter a number: ";
	int n;
	cin >> n;
	cout << n << "th term of fibonacci series = " << fibo(n);
	cout << endl;
}
