
#include "pch.h"
#include <iostream>
#include<ctime>
#include<random>
#include<vector>
using namespace std;
void fill(vector <int>& v, int cnt);
void test(vector<int> & v);
int main()
{
	vector <int> v;
	fill(v, 1000);
	test(v);
	return 0;
}
void fill(vector <int>& v, int cnt)
{
	v.clear();
	for (int i = 0; i <= cnt; i++)
		v.push_back(rand());
}
void test(vector<int> & v)
{
	sort(v.begin(), v.end());
	for (int i = 0; i <= v.size() - 1; i++)
		if (v[i] > v[i + 1])
		{
			cout << "ERROR!" << endl;
		}
		else
		{
			printf("round %d test success\n", i);
		}
}
