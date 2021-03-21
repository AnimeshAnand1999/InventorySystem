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
void writeInFile()
{
	ofstream tfile("test.txt");
	if (tfile.is_open())
	{
		for (int i = 1; i <= 4; i++)
		{
			tfile<<counttable[i - 1]<<"\t"<< buildcost_table[i - 1]<<"\t"<< sellprice[i - 1]<<"\t"<< probability[i - 1]<<"\n";
		}
		for (int i = 1; i <= 5; i++)
		{
			tfile<<rawitems[i - 1]<<"\t"<<rates[i - 1]<<"\n";
		}
		tfile.close();
	}
}