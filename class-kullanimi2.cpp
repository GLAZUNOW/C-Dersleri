#include <iostream>

using namespace std;

struct dist
{
	int feet;
	float inc;
};

struct room
{
	dist leg;
	dist with;
};

int main()
{
	room dig;
	dig.leg.feet=2;
	dig.leg.inc=0.89;
	dig.with.feet=1;
	dig.with.inc=0.20;
	if((dig.leg.inc+dig.with.inc)>1)
	{
		cout<<dig.leg.feet+dig.with.feet+1<<endl;
		cout<<dig.leg.inc+dig.with.inc-1<<endl;	
	}	
	else 
	{
		cout<<dig.leg.feet+dig.with.feet<<endl;
		cout<<dig.leg.inc+dig.with.inc<<endl;	
	}
}
