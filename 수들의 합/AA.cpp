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
	int n, m, cnt = 0;
	int s, e;
	s = 0;
	e = 1;
	vector<int> v;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
		if (temp == m)
			cnt++;
	}
	while (1) {
		int sum = 0;
		if (e+1 > v.size())
			break;
		for (int i = s; i <= e; i++) {
			sum += v[i];
		}
		//cout << sum <<" " << m << endl;
		if (sum > m) {
			s++;
			//e++;
		}
		else if (sum == m) {
			cnt++;
			s++;
			e++;
		}
		else {
			e++;
		}
	}
	cout << cnt << endl;
}