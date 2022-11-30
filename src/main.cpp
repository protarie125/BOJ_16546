#include <iostream>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll n;
	cin >> n;

	auto ans = n * (n + 1) / 2;
	while (1 < (n--)) {
		ll x;
		cin >> x;

		ans -= x;
	}

	cout << ans;

	return 0;
}