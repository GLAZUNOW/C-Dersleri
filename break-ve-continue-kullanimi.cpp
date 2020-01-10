#include <iostream>
using namespace std;
 int main()
 {
	setlocale(LC_ALL,"turkish");
 /*	int i=0;
 	while(i<10)
 	{
 		if(i==5)
 		{
 			break;
		}
	cout<<"i: "<<i<<endl;
	i++;
	}
	cout<<"Döngü Bitmiþtir...";*/
	
/*	for (int i=0;i<10;i++)
	{
		if(i==3||i==5)
		{
			continue;
		}	
		cout<<"i: "<<i<<endl;
	}*/
/*	int i=0;
	while(i<10)
	{
		if(i==3||i==5)
		{
			i++;
			continue;
		}
		cout<<"i: "<<i<<endl;
		i++;
	}*/
	string sys_username ="yunus_emre";
	string sys_password ="123456";
	
	string username;
	string password;
	
	while (true)
	{
		cout<<"Kullanýcý Adý:";
		cin>>username;
		cout<<"Parola:";
		cin>>password;
		
		if(username==sys_username&&password==sys_password)
		{
			cout<<"Hoþgeldiniz..."<<endl;
			break;
		}
			else if (username!=sys_username&&password==sys_password)
		{
			cout<<"Kullanýcý Adý Hatalý..."<<endl;
		}
			else if (username==sys_username&&password!=sys_password)
		{
			cout<<"Parola Hatalý..."<<endl;
		}
			else 
		{
			cout<<"Kullanýcý Adý ve Parola Hatalý..."<<endl;
		}
	}
	cout<<"Döngü Bitmiþtir...";
 }
