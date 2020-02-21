#include <iostream>
using namespace std;
class Student 
{
	public:
		string name;
		void tellName()
		{
			cout<<"Benim adým "<<name<<endl;
		}
};
int main()
{
	setlocale(LC_ALL,"turkish");
	Student student1;
	Student student2;
	student1.name="Emre";
	student2.name="Oðuz";
	student1.tellName();
	student2.tellName();
}
