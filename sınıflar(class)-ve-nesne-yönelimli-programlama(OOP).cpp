#include <iostream>
using namespace std;
class student
{
	public:
		string name;
};
int main()
{
	setlocale(LC_ALL,"turkish");
	student stdnt1;
	student stdnt2;
	stdnt1.name="Emre";
	stdnt2.name="Yunus";
	cout<<"��renci 1 �smi: "<<stdnt1.name<<endl;
	cout<<"��renci 2 �smi: "<<stdnt2.name<<endl;
}
