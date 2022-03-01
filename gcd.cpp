#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int x, y;
    cin >> x >> y;
    x = max(x, y);
    y = min(x, y);
    int countX = 0;
    int countY = 0;
    int gcdx;
    int gcdy;
    for(int i = 2; i <= y; i++) {
        if (x % i == 0 && y % i == 0) {
            cout << 0 << endl;
            break;
        } else if (x % i == 0) gcdx = i;
        else if (y % i == 0) gcdy = i;
    }
        while (x % gcdx == 0 && y % gcdx != 0) {
            countY++;
            y++;
        }
        while (x % gcdy != 0 && y % gcdy == 0) {
            countX++;
            x++;
        }
    if (countX < countY) cout << countX << endl;
    else cout << countY << endl;
}

int main() {
    int T;
	cin >> T;
	while (T--) {
	    test_case();
	}
	return 0;
}
