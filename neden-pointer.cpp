#include <iostream>
using namespace std;

class Employee
{
	private:
		string name;
		int salary;
		int id;
	
	public:
		Employee()
		{
			this->name="Bilgi Yok";
			this->salary=0;
			this->id=0;
		}
		Employee(string name,int salary)
		{
			this->name=name;
			this->salary=salary;
			this->id=0;
		}
		Employee(string name,int salary,int id)
		{
			this->name=name;
			this->salary=salary;
			this->id=id;
		}
		void setSalary(int salary)
		{
			this->salary=salary;
		}
		int getSalary()
		{
			return salary;
		}
		 void setName(string name)
		{
		 	this->name =name;	
		}
		 string getName()
		{
		 	return name;
		}
		void showInfos()
		{
			cout<<"Ýsim: "<<this->name<<endl;
			cout<<"Maaþ: "<<this->salary<<endl;
			cout<<"Id: "<<this->id<<endl;
		}
};
/*void deneme(Employee emp)
{
	emp.showInfos();
}*/
void deneme(Employee *ptr)
{
		ptr->showInfos();
}
int main ()
{
	setlocale(LC_ALL,"turkish");
	Employee employee("Emre",3000,12);
//	deneme(employee);
	deneme(&employee);
}
