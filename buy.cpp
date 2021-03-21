#include<iostream>
#include<fstream>
#include "header.h"
#include<vector>
using namespace std;

extern vector<int> counttable;
extern vector<int> buildcost_table;
extern  vector<int> costprice;
extern vector<int> sellprice;
extern vector<int> rawitems;
extern vector<float> rates;
extern vector<float> probability;//probability of sell of an item

void buy(vector<int> v)
{
	float sum = 0;
	for (int i = 0; i < 5; i++)
	{
		rawitems[i] += v[i];
		sum += v[i] * rates[i];
	}
	cout << "You have successfully purchased the raw materials to your inventory. It costed your company Rs" << sum << endl;
}