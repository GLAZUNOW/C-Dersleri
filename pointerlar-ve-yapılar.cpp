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
	Employee employee1={12,"Yunus Emre Öztürk","Biliþim"};
	Employee *ptr=&employee1;
	cout<<employee1.name<<endl;
	cout<<ptr->department<<endl;
}
