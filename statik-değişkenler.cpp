#include <iostream>
using namespace std;
void Test()
{
	static int i=3;
	i++;
	cout<<"i'nin de�eri: "<<i<<endl;
}
int main ()
{
	setlocale(LC_ALL,"turkish");
	Test();
	Test();
	Test();
}
