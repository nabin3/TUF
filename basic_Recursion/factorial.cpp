#include<iostream>
using namespace std;

int factorial(int n) {
	if (n == 0) return 1;
	return (n * factorial(n-1));
}

int main(){
	int number;
	cout << "Enter the number : ";
	cin >> number;
	cout << "factorial of" << number << " = " << factorial(number) << endl;
}

