int gcd(int a,int b)
{
	//Write your code here
    while (a > 0 && b > 0) {
        if (a > b) a %= b;
        else b %= a;
    }
    
    if (a == 0) return b;
    return a;
}

// time_complexity will be O(log phi (min(a, b))) in an iteration there are divsion so we take log and for changing divisor in 
// iteration we take phi
