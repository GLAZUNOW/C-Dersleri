#include <iostream>
using namespace std;
class Employee
{
	public:
		Employee()
		{
			cout<<"Constructor �a�r�ld� "<<endl;
		}
		~Employee()
		{
			cout<<"Destructor �a�r�ld� "<<endl;
		}
};
int main ()
{
	setlocale(LC_ALL,"turkish");
	Employee *emp=new Employee();
	delete emp;
}
