#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <set>
#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
	int n, m;
	vector<vector<int>> v, q;
	vector<int> tv;

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; i < n; i++) {
			int temp;
			cin >> temp;
			tv.push_back(temp);
		}
		v.push_back(tv);
		tv.clear();
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		for (int j = 0; i < m; i++) {
			int temp;
			cin >> temp;
			tv.push_back(temp);
		}
		q.push_back(tv);
		tv.clear();
	}

	for (int i = 0; i < q.size(); i++) {
		if (q[i][1] == 0) {
			// ¿ÞÂÊ
			for (int j = 0; j < q[i][2]; j++) {
				int temp = v[q[i][0]].front();
				v[q[i][0]].erase(v[q[i][0]].begin());
				v[q[i][0]].push_back(temp);
			}
		}
		else {
			// ¿À¸¥ÂÊ
			for (int j = 0; j < q[i][2]; j++) {
				int temp = v[q[i][0]].back();
				v[q[i][0]].pop_back();
				v[q[i][0]].insert(v[q[i][0]].begin(), temp);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; i < n; i++) {
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
}