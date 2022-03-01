#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int p;
    	set <int> psets;
    	for (int i = 0; i < 4; i++) {
    	    cin >> p;
    	    psets.insert(p);
    	}
    	if (psets.size() == 2) cout << 1 << "\n";
    	else if (psets.size() == 4 || psets.size() == 3) cout << 2 << "\n";
    	else if (psets.size() < 2) cout << 0 << "\n";
    }
	return 0;
}
