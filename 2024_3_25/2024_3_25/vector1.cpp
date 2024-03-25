#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

void printInt(int val) {
	cout << val << endl;
}

void test() {
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//1.
	vector<int>::iterator itbegin = v.begin();
	vector<int>::iterator itend = v.end();
	while (itbegin != itend) {
		cout << *itbegin << endl;
		itbegin++;
	}

	//2.
	for (vector<int>::iterator it = v.begin(); it < v.end(); it++) {
		cout << *it << endl;
	}

	//3.
	for_each(v.begin(), v.end(), printInt);
}

int main() {
	test();
}