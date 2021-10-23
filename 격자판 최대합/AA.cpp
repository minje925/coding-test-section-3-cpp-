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
	vector<vector<int>> v;
	vector<int> tv, res;
	
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
	int sum_1, sum_2;
	sum_1 = 0;
	sum_2 = 0;
	for (int i = 0; i < n; i++) {
		int sum_r, sum_c;
		sum_c = 0;
		sum_r = 0;
		for (int j = 0; j < n; j++) {
			sum_c = sum_c + v[i][j];
			sum_r = sum_r + v[j][i];
			if (i == j)
				sum_1 += v[i][j];
		}
		res.push_back(sum_c);
		res.push_back(sum_r);
	}
	res.push_back(sum_1);
	for (int i = 0; i < n; i++) {
		for (int j = n; j > n; j--) {
			sum_2 += v[i][j];
		}
	}
	res.push_back(sum_2);
	int max = -2147000000;
	for (int i = 0; i < res.size(); i++) {
		if (res[i] > max)
			max = res[i];
	}
	cout << max << " ";
}