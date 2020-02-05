#include <iostream>
using namespace std;
struct Employee
{
	int id;
	string name ;
	string department;
};
int main()
{
	setlocale(LC_ALL,"turkish");
//	Employee employee1={12,"Yunus Emre Öztürk","Biliþim"};
	Employee employee1;
	employee1.id=12;
	employee1.name="Yunus Emre";
	employee1.department="Biliþim";
	cout<<employee1.name<<endl;
	
}
