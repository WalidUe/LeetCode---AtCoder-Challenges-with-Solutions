#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

	int n, q;
	cin >> n >> q;

	vector<vector<int>> a(n);

	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;


		for (int j = 0; j < k; j++)
		{



			int data;
			cin >> data;
			a.at(i).push_back(data);

		}
	}

	int r, s;
	for (int k = 1; k <= q; k++)
	{
		cin >> r >> s;

		cout << a.at(r).at(s) << endl;//cout << a[r][s] << endl;

	}
	return 0;
}