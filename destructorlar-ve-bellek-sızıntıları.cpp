#include <iostream>
using namespace std;
class Employee
{
	public:
		string *s;
		int *i;
		Employee(string str,int ivalue)
		{
			s=new string;
			i=new int ;
			*s=str;
			*i=ivalue;
		}
		void show()
		{
			cout<<"String De�er: "<<*s<<" Int De�er: "<<*i<<endl;
		}
		~Employee()
		{
			delete s;
			delete i;
			cout<<"Destructorlar �a�r�ld�"<<endl;
		}
};
int main ()
{
	setlocale(LC_ALL,"turkish");
	Employee *emp=new Employee("Emre",25);
	emp->show();	
	delete emp;
	
}
