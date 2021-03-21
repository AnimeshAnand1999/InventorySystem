#include<iostream>
#include<fstream>
#include "header.h"
#include<vector>
using namespace std;
extern std::vector<int> counttable;
extern std::vector<int> buildcost_table;
extern std:: vector<int> costprice;
extern std::vector<int> sellprice;
extern std::vector<int> rawitems;
extern std::vector<float> rates;
extern std::vector<float> probability;//probability of sell of an item

void updateCostPrice()
{
	for (int i = 0; i < 4; i++)
	{
		table ob(i+1);
		float cost = 0;
		for (int j = 0; j < 5; j++)
		{
			cost += ob.materials[j] * rates[j];
		}
		cost += buildcost_table[i];
		costprice[i] = cost;
	}
}