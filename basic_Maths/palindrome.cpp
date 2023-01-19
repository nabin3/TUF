#include<iostream>
using namespace std;

int reverse(int n) {
    int number = 0;
    while (n > 0) {
        number = number * 10 + (n % 10);
        n /= 10;
    }
    return number;
}

int main() {
	// Write your code here
	int n;
    cin >> n;
    
    if (n == reverse(n)) cout << "true";
    else cout << "false";
}

