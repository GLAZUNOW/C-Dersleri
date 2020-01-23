#include <iostream>
using namespace std;
 int main()
 {
 	setlocale(LC_ALL,"turkish");
 	string parola ="123456";
 	string input;
 	
 	do 
	 {
 		cout<<"Parolanýzý Girin: ";
		cin>>input;	
		if(input != parola)
		{
			cout<<"Parolayý yanlýþ girdiniz..."<<endl;
		}
	 }while(input!=parola);
	 
	cout<<"Parolanýzý doðru girdiniz..."<<endl;
 }
