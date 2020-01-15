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
	void test() const//Burada iki parcayý birbirine baðladým.Artýk çalýþabilir.
	{
		cout<<"Test Metodu"<<endl;
	}
	int getValue() const //Bu metod herhangi bir deðeri deðiþtiremez.Const olmayan metodlarý çaðýramaz.
	{
		test();
		return this->a;
	}
};
int main ()
{
	setlocale(LC_ALL,"turkish");
	/*const Test test1=10;
	test1.a=20;
	cout<<test1.a<<endl;*/
	Test test1(10);
	cout<<test1.getValue()<<endl;
	
}
