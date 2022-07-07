#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;
	string x;
	getline(cin, x);

	for (auto i = 1; i <= n; ++i) {
		getline(cin, x);

		cout << i << ". " << x << '\n';
	}

	return 0;
}