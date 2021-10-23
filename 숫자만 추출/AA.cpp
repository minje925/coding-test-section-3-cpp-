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
	string str;
	int num = 0;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (isdigit(str[i])) {
			num *= 10;
			num = num + (str[i] - 48);
			//cout << str[i] - 48 << endl;
		}
	}
	int cnt = 0;
	for (int i = 1; i <= num; i++) {
		if (0 == num % i)
			cnt++;
	}
	cout << num << endl;
	cout << cnt;
}