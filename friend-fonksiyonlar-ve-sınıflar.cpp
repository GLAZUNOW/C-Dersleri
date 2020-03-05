#include <iostream>
using namespace std;

class Employee
{
	private:
		string name;
		int age;
		int salary;
	public:
		Employee(string name,int age,int salary)
		{
			this->name=name;
			this->age=age;
			this->salary=salary;
		}
	friend class Test;
//	friend void showInfos(Employee employee);
};
class Test
{
	public:
	    static void showInfos(Employee employee)
		{
			cout<<employee.name<<" "<<employee.age<<" "<<employee.salary<<endl;
		}
};
/*void showInfos(Employee employee)
{
	cout<<employee.name<<" "<<employee.age<<" "<<employee.salary<<endl;
}*/
int main ()
{
	setlocale(LC_ALL,"turkish");
	Employee employee("Emre",25,4000);
	Test::showInfos(employee);
/*	Employee employee("Emre",25,4000);
	showInfos(employee);*/
}
