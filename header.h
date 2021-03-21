#pragma once
#ifndef header
#define header
#include<iostream>
#include<vector>
using namespace std;
class furniturematerial {
	//1 wood; 2 cane; 3 steel; 4 leather; 5 fabric;
	vector<int> materials;//materials
	vector<float> ratemat;//cost rate of materials
public:
	furniturematerial(vector<int> ar, vector<float> rar)
	{
		materials = ar; ratemat = rar;
	}
};
class table {
public:vector<int> materials;
	  table(int i)
	  {
		  materials.resize(5, 0);
		  switch (i) {
		  case 1: materials = { 10,15,5,0,2 };
				break;
		  case 2: materials = { 20,30,10,0,4 };
				break;
		  case 3: materials = { 10,15,5,3,0 };
				break;
		  case 4: materials = { 20,30,10,6,0 };
				break;
		  }
	  }

};

void buy(vector<int> v);
void manufacture(int x,int y);
void profitofall();
void ReadFromFile();
void updateCostPrice();
void writeInFile();


#endif // !header