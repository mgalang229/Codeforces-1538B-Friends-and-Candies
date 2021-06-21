#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		int s = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			// calculate the sum of all the elements
			s += a[i];
		}
		if (s % n != 0) {
			// if the sum of all the elements is not divisible by 'n', then output -1
			// because Polycarp's friends will not be able to receive equal no. of candies
			cout << "-1" << '\n';
			continue;
		}
		// otherwise, divide the sum by 'n' to get the candies per friend
		s /= n;
		int res = 0;
		for (int i = 0; i < n; i++) {
			if (s < a[i]) {
				// increment 'res' if the new value of 's' is STRICTLY less 
				// than the candies of a friend (minimum) because if the i-th friend
				// has more candies than 's' divided by 'n', then he must be chosen to give
				// his/her candies to the others who had less than 's' divided by 'n' candies
				res++;
			}
		}
		cout << res << '\n';
	}
	return 0;
}
