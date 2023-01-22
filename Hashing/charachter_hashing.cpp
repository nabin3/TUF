#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	
	// precomputing 
	int hash[26] = {0}; // all small letter in string,so i take hash array of size 26
	for (int i = 0; i < s.size(); i++) {
		hash[s[i] - 'a']++; // for capital letters only hash[s[i] - 'A']++
	}
	/* int hash[256] = {0};
	   for (int i = 0; i < s.size(); i++) {
	   	hash[s[i]]++;
	   as there is no mantion of exclusive charachter range in string we take hash array size of 256 
	*/

	int q;
	cin >> q;
	while (q--) {
		char c;
		cin >> c;
		//fetching
		cout << hash[c - 'a'] << endl; // in order to access hash array index we do c - 'a'
		// cout << hash[c] << endl; as there is no mantion of exclusive charachter range in string we take hash array size of 256 
	}
}
