// radhe radhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define inf 1e18
#define abs(a,b) a > b ? a - b : b - a

bool cmp(pair<int, int> p1, pair<int, int> p2) {
	return p1.second < p2.second;
}

int main() {
	//code
	int t;
	cin >> t;

	while (t--) {
		int n, s, e;
		cin >> n;
		int res = 1;
		std::vector<pair<int, int>> v;

		for (int i = 0; i < n; i++) {
			cin >> s >> e;
			v.push_back(make_pair(s, e));
		}

		// 1. Sort the activities
		sort(v.begin(), v.end(), cmp);

		// 2. Greedily solve that
		int fin = v[0].second;
		for (int i = 1; i < v.size(); i++) {
			if (v[i].first >= fin) {
				res++;
				fin = v[i].second;
			}
		}

		cout << res << endl;

	}

	return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;

	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];

	}

	cout << findTotal(arr, n) << endl;
}