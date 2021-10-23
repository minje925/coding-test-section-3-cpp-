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
	int n;
	vector<int> tv;
	vector<vector<int>> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int temp;
			cin >> temp;
			tv.push_back(temp);
		}
		v.push_back(tv);
		tv.clear();
	}

	int s, e, mid;
	mid = s = e = n / 2;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = s; j <= e; j++) {
			sum += v[i][j];
		}
		if (i < mid) {
			s--;
			e++;
		}
		else {
			s++;
			e--;
		}
	}
	cout << sum << endl;
}