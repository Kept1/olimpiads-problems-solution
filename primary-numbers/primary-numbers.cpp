#include "pch.h"
#include <iostream>

using namespace std;

bool is_primary(int i) {
	for(int j = 2; j <= int(sqrt(i)); j++) {
		if (i % j == 0) {
			return false;
		}
	}
	return true;
}

int main()
{
	int n, m;
	cin >> m >> n;
	for (int i = m; i <= n; i++) {
		if (is_primary(i)) {
			cout << i << endl;
		}
	}
	return 0;
}