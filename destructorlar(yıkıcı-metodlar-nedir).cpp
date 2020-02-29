#include <iostream>
using namespace std;
class Employee
{
	public:
		Employee()
		{
			cout<<"Constructor Çaðrýldý "<<endl;
		}
		~Employee()
		{
			cout<<"Destructor çaðrýldý "<<endl;
		}
};
int main ()
{
	setlocale(LC_ALL,"turkish");
	Employee *emp=new Employee();
	delete emp;
}
