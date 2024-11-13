#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	int y = 0;
	int k;
	cin >> k;
	int n;
	cin >> n;
	int m;
	cin >> m;
	vector <int>b(n);
	vector <int>c(m);
	for (int i = 0; i < b.size(); ++i) {
		cin >> b[i];
	}
	for (int i = 0; i < c.size(); ++i) {
		cin >> c[i];
	}
	b.insert(b.begin() + k, c.begin(), c.end());
	for (int i = 0; i < b.size(); ++i) {
		cout << b[i];
	}
	cout << b[k];
}