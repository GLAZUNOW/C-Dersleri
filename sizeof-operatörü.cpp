#include <iostream>
using namespace std;
struct student
{
	int id;
	char letter;
};
int main()
{
	setlocale(LC_ALL,"turkish");
	cout<<"Ýnteger: "<<sizeof(int)<<endl;
	cout<<"Char: "<<sizeof(char)<<endl;
	cout<<"Double: "<<sizeof(double)<<endl;
	cout<<"Float: "<<sizeof(float)<<endl;
	cout<<"Student: "<<sizeof(student)<<endl;
}
