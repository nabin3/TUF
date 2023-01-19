#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

    //Write your printDivisors function here
void printDivisors(int num) {
    vector<int> ls;
    
    for (int i = 1; i*i <= num; i++) {
        if (num % i == 0) {
            ls.push_back(i);
            if ((num/i) != i) ls.push_back(num/i);
        }
    }
    
    sort(ls.begin(), ls.end());
    for (auto it : ls) cout << it << " ";
}

int main() {
    int n;
    cin >> n;
    printDivisors(n);
    return 0;
}
