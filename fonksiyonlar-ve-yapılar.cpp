#include <iostream>
using namespace std;
struct Employee
{
	int id;
	string name ;
	string department;
};
void show(Employee *a)
{
	a->id=30;
	cout<<"Id: "<<a->id<<endl;
	cout<<"İsim: "<<a->name<<endl;
	cout<<"Departman: "<<a->department<<endl;
}
int main()
{
	setlocale(LC_ALL,"turkish");
	Employee employee1={12,"Yunus Emre Öztürk","Bilişim"};
	show(&employee1);
	cout<<employee1.id<<endl;
}
