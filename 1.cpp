#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter a value:\n";
	cin>>a;
	cout<<"Enter b value:\n";
	cin>>b;
	if(!(a^b))
	{
		cout<<"two numbers are equal";
	}
	else{
		cout<<"Not equal";
	}
	return 0;
}

