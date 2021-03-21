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

void profitofall()
{
	for (int i = 0; i < 4; i++)
	{
		if (i == 0) cout << "table decorated with fabric(small) ->";
		if(i==1) cout << "table decorated with fabric(big) ->";
		if (i == 2) cout << "table decorated with leather(small) ->";
		if (i == 3) cout << "table decorated with leather(big) ->";
		float prof = 100 * (sellprice[i] - costprice[i]) / costprice[i];

		cout << " " << prof << "%" << endl;
	}
}