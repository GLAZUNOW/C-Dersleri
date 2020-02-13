#include <iostream>
using namespace std;
struct Address
{
	string cityName;
	int No;
};
struct Employee
{
	int id;
	string name ;
	string department;
	Address *adrs1;
};
int main()
{
	Employee emply;
	emply.id=12;
	emply.name="Emre";
	emply.department="Biliþim";
	Address adrs2={"Ankara",5};
	emply.adrs1=&adrs2;
	Employee *ptr=&emply;
	
	cout<<ptr->adrs1->cityName<<endl;
	cout<<ptr->adrs1->No<<endl;
}
