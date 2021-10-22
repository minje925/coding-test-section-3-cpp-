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

string isReverse(string str) {
	string temp = "";
	for (int i = str.size() - 1; i >= 0; i--) {
		temp = temp + str[i];
	}
	//cout << "거꾸로 : " << temp << endl;
	return temp;
}

int main(int argc, char* argv[]) {
	int n;
	vector<string> v;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		string temp;
		cin >> temp;
		transform(temp.cbegin(), temp.cend(), temp.begin(), tolower); // 소문자로 변경
		//getline(cin, temp);
		v.push_back(temp);
		//cout << temp << endl;
	}
	for (int i = 0; i < n; i++) {
		string temp = isReverse(v[i]);
		if (v[i] == temp)
			printf("#%d YES\n", i+1);
		else
			printf("#%d NO\n", i + 1);
	}

}