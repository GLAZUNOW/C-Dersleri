#include <iostream>
using namespace std;
 int main()
 {
 	setlocale(LC_ALL,"turkish");
 	string parola ="123456";
 	string input;
 	
 	do 
	 {
 		cout<<"Parolan�z� Girin: ";
		cin>>input;	
		if(input != parola)
		{
			cout<<"Parolay� yanl�� girdiniz..."<<endl;
		}
	 }while(input!=parola);
	 
	cout<<"Parolan�z� do�ru girdiniz..."<<endl;
 }
