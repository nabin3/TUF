#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int i, string &s) { 			// this is functional recursion
	if (i >= s.size()/2) return true;
	if (s[i] != s[s.size()-i-1]) return false;
	return isPalindrome(i+1, s);
}

int main() {
	string s;
	cout << "Enter a string: ";
	cin >> s;
	cout << "Is this string palindrome? " << isPalindrome(0, s) << endl;
}
