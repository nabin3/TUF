//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void print1(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "* ";
		}
		cout << endl;
	}
}

void print2(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
}
void print3(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j << " ";
		}
		cout << endl;
	}
}
void print4(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i << " ";
		}
		cout << endl;
	}
}
void print5(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n-i+1; j++) {
			cout << "* ";
		}
		cout << endl;
	}
}
void print6(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= n-i; j++) {
			cout << j << " ";
		}
		cout << endl;
	}
}
void print7(int n) {
	for (int i = 0; i < n; i++) {
		// for space in rightside
		for (int j = 0; j < n-i-1; j++) {
			cout << " ";
		}
		// for *
		for (int j = 0; j < 2*i+1; j++) {
			cout << "*";
		}
		// for spaces in leftside
		for (int j = 0; j < n-i-1; j++) {
			cout << " ";
		}
		cout << endl;
	}
}
void print8(int n) {
	for (int i = 0; i < n; i++) {
		// for space in rightside
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		// for *
		for (int j = 0; j < 2*n - (2*i+1); j++) {
			cout << "*";
		}
		// for spaces in leftside
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		cout << endl;
	}
}
void print10(int n) {
	int stars;
	for (int i = 1; i <= 2*n - 1; i++) {
		stars = i;
		if (i > n) {
			stars = 2*n - i;
		}
		for (int j = 1; j <= stars; j++) {
			cout <<"*";
		}
		cout << endl;
	}
}

void print11(int n) {
	int dig;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			dig = 1;
		} else {
			dig = 0;
		}
		for (int j = 0; j <= i; j++) {
			cout << dig;
			dig = 1 - dig;
		}
		cout << endl;
	}
}

void print12(int n) {
	int space = 2*(n - 1);
	for (int i = 1; i <= n; i++) {

		// numbers
		for (int j = 1; j <= i; j++) {
			cout << j;
		}

		// spaces
		for (int j = 1; j <= space; j++) {
			cout << " ";
		}

		// numbers
		for (int j = i; j >= 1; j--) {
			cout << j;
		}
		cout << endl;
		space -= 2;
	}
}

void print13(int n) {
	int num = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << num << " ";
			num++;
		}
		cout << endl;
	}
}

void print14(int n) {
	for (int i = 0; i < n; i++) {
		//char ch = 'A';
		for (char ch = 'A'; ch <= 'A' + i; ch++) {
			cout << ch << " ";
			//ch++;
		}
		//ch = 'A';
		cout << endl;
	}
}

void print15(int n) {
	//for (int i = n; i > 0; i--) {
	for (int i = 0; i < n; i++) {
		//for (char ch = 'A'; ch <= '@' + i; ch++) {
		for (char ch = 'A'; ch <= 'A' + (n-i-1); ch++) { 
			cout << ch << " ";
		}
		cout << endl;
	}
}
		
void print16(int n) {
	for (int i = 0; i < n; i++) {
		char ch = 'A' + i;
		for (int j = 0; j <= i; j++) {
			cout << ch << " ";
		}
		cout << endl;
	}
}

void print17(int n) {
	for (int i = 0; i < n; i++) {

		// space 
		for (int j = 0; j <= n-i-1; j++) {
			cout << " ";
		}

		// charachters
		char ch = 'A';
		int breakPoint = (2*i+1) / 2;
		for (int j = 1; j <= 2*i+1; j++) {
			cout << ch;
			if (j <= breakPoint) ch++;
			else ch--;
		}
		
		// space 
		for (int j = 0; j <= n-i-1; j++) {
			cout << " ";
		}
		cout << endl;
	}
}

void print18(int n) {
	for (int i = 0; i < n; i++) {
		for (char ch = 'E' - i; ch <= 'E'; ch++) {
			cout << ch << " ";
		}
		cout << endl;
	}
}

void print19(int n) {
	// upper
	int sp = 0;
	for (int i = 0; i < n; i++) {

		// stars
		for (int j = 1; j <= n-i; j++) {
			cout << "*";
		}

		// spaces
		for (int j = 1; j <= sp; j++) {
			cout << " ";
		}

		// stars
		for (int j = 1; j <= n-i; j++) {
			cout << "*";
		}

		sp += 2;
		cout << endl;
	}

	// lower
	sp = 2 * (n - 1);
	for (int i = 1; i <= n; i++) {

		// stars
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}

		// spaces
		for (int j = 1; j <= sp; j++) {
			cout << " ";
		}

		// stars
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}

		sp -= 2;
		cout << endl;
	}
}

int main() {
	cout << "pattern 1:" << endl;
	print1(3);
	cout << "pattern 2:" << endl;
	print2(5);
	cout << "pattern 3:" << endl;
	print3(5);
	cout << "pattern 4:" << endl;
	print4(5);
	cout << "pattern 5:" << endl;
	print5(5);
	cout << "pattern 6:" << endl;
	print6(5);
	cout << "pattern 7:" << endl;
	print7(5);
	cout << "pattern 8:" << endl;
	print8(5);
	cout << "pattern 9:" << endl;
	print7(5);
	print8(5);
	cout << "pattern 10:" << endl;
	print10(6);
	cout << "pattern 11:" << endl;
	print11(5);
	cout << "pattern 12:" << endl;
	print12(7);
	cout << "pattern 13:" << endl;
	print13(5);
	cout << "pattern 14:" << endl;
	print14(5);
	cout << "pattern 15:" << endl;
	print15(5);
	cout << "pattern 16:" << endl;
	print16(5);
	cout << "pattern 17:" << endl;
	print17(5);
	cout << "pattern 18:" << endl;
	print18(5);
	cout << "pattern 19:" << endl;
	print19(6);
}
