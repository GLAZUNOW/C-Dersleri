#include <iostream>
using namespace std;

class Employee
{
	private:
	string name;
	int age;
	public:
	void setAge(int yas)
	{
		if(yas<0)
		{
			cout<<"Böyle bir deðer veremezsiniz..."<<endl;
		}
		else 
		{
			age=yas;
		}
	}
	int getAge()
	{
	 	return age;
	}
	 void setName(string isim)
	{
	 	name =isim;	
	}
	 string getName()
	{
	 	return name;
	}
};
int main ()
{
	setlocale(LC_ALL,"turkish");
	Employee employee;
	employee.setAge(25);
	employee.setName("Emre");
	cout<<employee.getName()<<endl;
	cout<<employee.getAge()<<endl;
	
}
