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
	int n1, n2;
	vector<int> v1, v2;
	cin >> n1;
	for (int i = 0; i < n1; i++) {
		int temp;
		cin >> temp;
		v1.push_back(temp);
	}
	cin >> n2;
	for (int i = 0; i < n2; i++) {
		int temp;
		cin >> temp;
		v2.push_back(temp);
	}
	for (int i = 0; i < n2; i++) {
		v1.push_back(v2[i]);
	}
	sort(v1.begin(), v1.end());
	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << " ";
	}
}