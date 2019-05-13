#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[50],temp;
	cout<<"Enter the string\n";
	gets(str);
	int i,j;
	j=strlen(str)-1;
	for(i=0;i<j;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	for(i=0;i<3;i++)
	{
		cout<<str[i];
	}
}
