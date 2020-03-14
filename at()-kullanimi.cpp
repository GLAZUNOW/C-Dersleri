#include <iostream> 
using namespace std; 

void atDemo(string str) 
{ 
	cout << str.at(1); 
} 

int main() 
{ 
	string str("ozturk"); 
	atDemo(str); 
	return 0; 
} 

