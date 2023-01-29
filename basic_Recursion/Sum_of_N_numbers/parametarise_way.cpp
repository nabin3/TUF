#include<bits/stdc++.h>
using namespace std;

void sum(int i, int s) {
	if (i < 1) {
		cout << s;
		return;
	}
	sum(i-1, s+i);
}

int main(){
	int n;
	cout << "Until which number you want to calculate sum of natural numbers? ";
	cin >> n;
	sum(n, 0);
	cout << endl;
}
