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
void ReadFromFile()
{
	ifstream tfile("test.txt");
	if (tfile.is_open())
	{
		for (int i = 1; i <= 4; i++)
		{
			int w; float x, y, z;
			tfile >> w >> x >> y >> z;
			counttable[i - 1] = w;
			buildcost_table[i - 1] = x;
			sellprice[i - 1] = y;
			probability[i - 1] = z;
		}
		for (int i = 1; i <= 5; i++)
		{
			int x; float y; tfile >> x >> y;
			rawitems[i - 1] = x; rates[i - 1] = y;
		}
		tfile.close();
	}
	// also update the costprice of each table
	
	updateCostPrice();
}