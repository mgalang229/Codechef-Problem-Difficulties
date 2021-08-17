#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		vector<int> counter(11, 0);
		for (int i = 0; i < 4; i++) {
			int x;
			cin >> x;
			// count the frequency of each number
			counter[x]++;
		}
		vector<int> v;
		for (int i = 0; i < (int) counter.size(); i++) {
			if (counter[i] > 0) {
				// store the frequency of a number (must be greater than 0) in a separate list
				v.emplace_back(counter[i]);
			}
		}
		if (find(v.begin(), v.end(), 4) != v.end()) {
			// if the list contains 4 (no distinct elements), then 
			// making a problem set is impossible
			cout << 0;
		} else if (find(v.begin(), v.end(), 3) != v.end()) {
			// if the list contains 3, then there is 1 distance number so it is
			// possible to form one problem set
			cout << 1;
		} else {
			// otherwise, the maximum number of problem sets that can be created is 2
			cout << 2;
		}
		cout << '\n';
	}
	return 0;
}
