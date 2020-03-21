#include <iostream>

using namespace std;

int main()
{
	int s,k,giris;
	int yildiz,bosluk;
	printf("Giris: ");
	scanf("%d",&giris);
	
	yildiz=2;
	bosluk=giris-1;
	
	for(k=0;k<giris;k++)
	{
		for(s=0;s<bosluk;s++)
		{
			printf(" ");
		}
		
		for(s=0;s<yildiz;s++)
		{
			if(s==0)
				printf("/");
			else if(s==yildiz-1)
				printf("\\");
			else
				printf("*");
		}
		
		printf("\n");
		yildiz+=2;
		bosluk--;
	}
	
	
	yildiz-=2;
	bosluk=0;
	
	for(k=0;k<giris;k++)
	{
		for(s=0;s<bosluk;s++)
		{
			printf(" ");
		}
		
		for(s=0;s<yildiz;s++)
		{
			if(s==0)
				printf("\\");
			else if(s==yildiz-1)
				printf("/");
			else
				printf("*");
		}
		
		printf("\n");
		yildiz-=2;
		bosluk++;
	}
}
