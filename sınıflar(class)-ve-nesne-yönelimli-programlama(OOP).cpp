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
	cout<<"Öğrenci 1 İsmi: "<<stdnt1.name<<endl;
	cout<<"Öğrenci 2 İsmi: "<<stdnt2.name<<endl;
}
