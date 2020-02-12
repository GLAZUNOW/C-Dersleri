#include <iostream>
using namespace std;
struct Adress
{
	string cityName;
	int No;
};
struct Employee
{
	int id;
	string name ;
	string department;
	Adress adrs;
};
int main()
{
	setlocale(LC_ALL,"turkish");
	Employee empy={12,"Emre","Biliþim",{"Ankara",5}};
	cout<<empy.id<<endl;
	cout<<empy.name<<endl;
	cout<<empy.department<<endl;
	cout<<empy.adrs.cityName<<endl;
	cout<<empy.adrs.No<<endl;
}
