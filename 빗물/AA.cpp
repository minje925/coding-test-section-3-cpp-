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
	int h, w, res = 0;
	vector<int> v, t;
	cin >> h >> w;
	for (int i = 0; i < w; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	for (int i = 1; i < w - 1; i++) {
		int left = 0;
		int right = 0;
		
		for (int j = i - 1; j >= 0; j--) {
			if (v[j] > left)
				left = v[j];
		}
		for (int j = i + 1; j < w; j++) {
			if (v[j] > right)
				right = v[j];
		}
		int temp = min(left, right);
		if (v[i] > temp)
			continue;
		res += temp - v[i];
		cout << "left : " << left << " right : " << right << " min : " << temp <<" res : "<< res<<endl;
		
		
	}
	cout << res;
}