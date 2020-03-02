#include <iostream>
using namespace std;
class Gamer
{
	public:
		static int gamers;
		Gamer()
		{
			gamers++;
			cout<<"Yeni oyuncu oluþturuldu"<<endl;
		}
};
int Gamer::gamers=0;
int main ()
{
	setlocale(LC_ALL,"turkish");
	Gamer gamer1;
	Gamer gamer2;
	Gamer gamer3;
	Gamer gamer4;
	cout<<Gamer::gamers<<endl;
}
