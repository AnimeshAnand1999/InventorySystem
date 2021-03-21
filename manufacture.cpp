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

void manufacture(int x, int y)
{
	vector<int> mat;
	table ob(x);
	mat = ob.materials;
	counttable[x - 1] += y;
	float costsum = y * buildcost_table[x - 1];
	for (int i = 0; i < 5; i++)
	{
		if (y * mat[i] > rawitems[i])
		{
			cout << "not enough raw material to build"<<y<< " tables\n";
		}
		return;
	}
	for (int i = 0; i < 5; i++)
	{
		rawitems[i] -= y * (mat[i]);
	}

	cout << "you successfully manufactered, " <<y<< " tables and it costed(only manufacturing) your company Rs" << costsum << endl;

}