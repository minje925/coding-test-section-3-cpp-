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
	vector<int> v, tv;
	vector<vector<int>> q;
	for (int i = 1; i <= 20; i++) {
		v.push_back(i);
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 2; j++) {
			int temp;
			cin >> temp;
			tv.push_back(temp);
		}
		q.push_back(tv);
		tv.clear();
	}
	for (int i = 0; i < 10; i++) {
		vector<int> t;
		for (int j = q[i][1]-1; j >= q[i][0]-1; j--) {
			t.push_back(v[j]);
		}
		int cnt = 0;
		for (int j = q[i][0]-1; j <= q[i][1]-1; j++) {
			v[j] = t[cnt++];
		}
		t.clear();
	}
	for (int i = 0; i < 20; i++) {
		cout << v[i] << " ";
	}
}