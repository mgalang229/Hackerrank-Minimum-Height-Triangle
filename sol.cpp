#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void decode() {
	double b, h, a;
	cin >> b >> a;
	h = (a * 2) / b;
	cout << round(h) << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
