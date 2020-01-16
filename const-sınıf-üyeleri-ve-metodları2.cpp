#include <iostream>
using namespace std;
class Test
{
	private:
		int a;
	public:
		Test(int a)
		{
			this->a=a;
		}
		int getValue() const
		{
			return this->a;
		}
};
void test (const Test &test)
{
	cout<<test.getValue()<<endl;
}
int main ()
{
	setlocale(LC_ALL,"turkish");
	Test test1(10);
	test(test1);
}
