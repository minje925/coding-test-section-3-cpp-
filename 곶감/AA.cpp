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
		for (int j = 0; j < n; j++) {
			int temp;
			cin >> temp;
			tv.push_back(temp);
		}
		v.push_back(tv);
		tv.clear();
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < 3; j++) {
			int temp;
			cin >> temp;
			tv.push_back(temp);
		}
		q.push_back(tv);
		tv.clear();
	}
	cout<<"qsize : "<<q.size()<<endl;
	for (int i = 0; i < q.size(); i++) {
		if (q[i][1] == 0) {
			// ¿ÞÂÊ
			for (int j = 0; j < q[i][2]; j++) {
				int temp = v[q[i][0]-1].front();
				v[q[i][0]-1].erase(v[q[i][0]-1].begin());
				v[q[i][0]-1].push_back(temp);
			}
		}
		else if(q[i][1] == 1) {
			for (int j = 0; j < q[i][2]; j++) {
				int temp = v[q[i][0]-1].back();
				v[q[i][0]-1].pop_back();
				v[q[i][0]-1].insert(v[q[i][0]-1].begin(), temp);
			}
			
		}
	}
	int sum = 0;
	int s, e = n;
	s = 0;
	int mid = n/2;
	for (int i = 0; i < n; i++) {
		if(mid > i) {
			for (int j= s; j < e; j++) {
				cout<<v[i][j]<<" ";
				sum+=v[i][j];
			}
			cout<<endl;
			s++;
			e--;
		}
		else {
			for (int j= s; j < e; j++) {
				cout<<v[i][j]<<" ";
				sum+=v[i][j];
			}
			cout<<endl;
			s--;
			e++;
		}
	}
	cout<<sum<<endl;
}
