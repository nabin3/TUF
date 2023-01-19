#include<bits/stdc++.h>
using namespace std;

int power(int a, int x) {
    int sum = 1;
    for (int i = 0; i < x; i++) {
        sum *= a;
    }
    return sum;
}

int arm_strong(int number) {
    int count = (int)(log10(number) + 1);
    int result = 0;
    while (number > 0) {
        result = result + power((number % 10), count);
        number /= 10;
    }
    return result;
}

int main() {
	// Write your code here
    int n;
	cin >> n;
    if (n == arm_strong(n)) cout << "true";
    else cout << "false";
}

