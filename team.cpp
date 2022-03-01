#include <bits/stdc++.h>
using namespace std;

int sum(int val) {
    int rem, num = val, sum = 0;
    while (num != 0) {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }
    return sum;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n, s, s1;
	    cin >> n >> s >> s1;
	    int pro = sum(s);
	    int eng = sum(s1);
	    if (pro == eng) cout << pro << "\n";
	    else if ()
	    else if (pro > eng && n % eng == 0) cout << eng << "\n";
	    else if (eng > pro && n % pro == 0) cout << pro << "\n";
	}
	return 0;
}
