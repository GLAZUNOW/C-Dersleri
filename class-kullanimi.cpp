#include <iostream>

using namespace std;

struct card
{
	int number ;
	string suit ;
};

//ka��tlar�n s�n�fland�r�lmas� ile ilgili
/*const string sinek="sinek";
const string karo="karo";
const string kupa="kupa";
const string maca="maca";*/

//resimli ka��tlar�n tan�mlanmas�
const int as=14;
const int papaz=13;
const int kiz=12;
const int vale=11;

int main()
{
	card x={5,"sinek"},y={8,"maca"},z={papaz,"kupa"},tep;
	cout<<z.suit<<" "<<z.number<<endl;
}
