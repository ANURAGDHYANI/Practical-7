#include<iostream>
using namespace std;

int main()
{
	int ch;
	cout<<"1.YEAR\n2.MONTH\n3.DATE\n";
	cout<<"Enter your choice: ";
	cin>>ch;
	
	switch(ch)
	{
		case 1: cout<<"2021\n";
				break;
		case 2: cout<<"OCTOBER\n";
				break;
		case 3: cout<<"18\n";
				break;
		default: cout<<"INVALID CHOICE\n";
	}	
	return 0;
}
