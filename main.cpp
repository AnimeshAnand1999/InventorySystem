
#include<iostream>
#include<vector>
#include "header.h"
using namespace std;


vector<int> counttable(4,0);
vector<int> buildcost_table(4);
vector<int> costprice(4);
vector<int> sellprice(4);
vector<int> rawitems(5,0);
vector<float> rates(5,0);
vector<float> probability(4,0);//probability of sell of an item



int main()
{
	
	//read from file
	ReadFromFile();
	
	
    char usrch='y';
	int choice = 0; 
	while (1)
	{
		cout << "enter the operation you want to perform \n 1.buy raw material \n 2.manufacture  new tables"<<"\n 3. show current profit of all the tables \n 4. show number of tables of each type in the inventory"<<"\n 5. show raw materials of each type in the inventory(1.wood 2.cane 3.steel 4.leatehr 5.fabric"<<"\n 6. update the new manufacturing cost. \n 7.update the cost price of raw materials \n 8. update the selling price of goods \n"<<"9.close inventory\n";
		cin >> choice;
		switch (choice)
		{
		case 1: {
			vector<int> v(5);
			cout<<"enter the number of purchases of items you want to buy numbered(1-5) \n"; int n; cin>>n;
            cout << "enter the raw items you want to buy according to their number and amount of items seperated by space \n";
			int x; int y;
			while (n--)
			{   cin >> x >> y;
				v[x - 1] += y;
			}
			buy(v);// it will also show the net money expenditure by company
		}
			  break;
		case 2: {
			cout << "enter which model of table you want to manufacture and the number of such tables\n 1.table decorated by fabric(small) \n2.table decorated by fabric(big) \n3.table decorated by leather(small)\n4.table decorated by leather(big)";
			int x; cin >> x;
			int y; cin >> y;
			manufacture(x, y);// diplays that such many are manufactured . costs _ rs to company.
		}
			  break;
		case 3: {
			profitofall();//show in percentage . cost of a table = buying raw material+manufacture cost;
		}
			  break;
		case 4: {
			//prints number of finished items of each type
			for (int i = 0; i < 4; i++)
			{
				if (i == 0) cout << "table decorated with fabric(small) ->";
				if (i == 1) cout << "table decorated with fabric(big) ->";
				if (i == 2) cout << "table decorated with leather(small) ->";
				if (i == 3) cout << "table decorated with leather(big) ->";

				cout << " " << counttable[i] << endl;
			}
		}
			  break;
		case 5:
			//shows amount of raw goods in inventory
			for (int i = 0; i < 5; i++)
			{
				if (i + 1 == 1) cout << "wood ->";
				if (i + 1 == 2) cout << "cane ->";
				if (i + 1 == 3) cout << "steel ->";
				if (i + 1 == 4) cout << "leather ->";
				if (i + 1 == 5) cout << "fabric ->";
				cout << rawitems[i] << endl;
			}
			break;
		case 6:
		{	cout << "which item's manufacturing cost needs to be updated: 1.table decorated by fabric(small) \n2.table decorated by fabric(big) \n3.table decorated by leather(small)\n4.table decorated by leather(big)";
			int x; cin >> x;
			cout << "enter the new manufaturing cost\n"; int y; cin >> y;
			//change the curr profit , cost price of tables, manufactoring cost arrays
			buildcost_table[x - 1] = y;
			updateCostPrice();
		}
			break;
		case 7:
		{	cout << "which raw material rates needs to be updated:1.wood 2.cane 3.steel 4.leather 5.fabric \n";
			int x; cin >> x;
			//update cost of raw mat, change cur profit, cost price of tables
			int y; cout << "enter the new price rate:  \n"; cin >> y;
			rates[x - 1] = y;
			updateCostPrice();
		}
			break;
		case 8:
			cout<<"please enter the current selling price of finished goods:\n  1.table decorated by fabric(small) \n2.table decorated by fabric(big) \n3.table decorated by leather(small)\n4.table decorated by leather(big)";
			cout<<endl;
			for (int i = 0; i < 4; i++)
			{
				cout << "S.P of item"<<i+1<<"\n"; int x; cin >> x;
				sellprice[i - 1] = x;
			} 
			break;
		case 9: {writeInFile(); return 0;}
			break;
		default:cout << "invalid choice"<<endl;
		}
        cout<<"press a key to continue..... ";
        cin>>usrch;
        
	}
	return 0;
}