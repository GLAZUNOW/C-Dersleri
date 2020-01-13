#include <iostream>
using namespace std;

class Employee
{
	private:
	string name;
	int salary;
	int id;
	
	public:
	Employee(string isim,int maas,int kimlik)
	{
		name=isim;
		salary=maas;
		id=kimlik;
	}
	void setSalary(int maas)
	{
		salary=maas;
	}
	int getSalary()
	{
		return salary;
	}
	 void setName(string isim)
	{
	 	name =isim;	
	}
	 string getName()
	{
	 	return name;
	}
	void showInfos()
	{
		cout<<"Ýsim: "<<name<<endl;
		cout<<"Maaþ: "<<salary<<endl;
		cout<<"Id: "<<id<<endl;
	}
};
int main ()
{
	setlocale(LC_ALL,"turkish");
	Employee employee("Emre",3000,12);
	employee.showInfos();	
}
