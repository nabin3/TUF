#include<iostream>
using namespace std;

void print_nName(string s, int n) {
	if ( n < 1) return;
	cout << s << endl;
	print_nName(s, --n);
}

int main() {
	cout << "Enter your name: ";
	string s;
	getline(cin, s);
	int n;
	cout << "How many times You want to write your name? ";
	cin >> n;
	print_nName(s, n);
}
