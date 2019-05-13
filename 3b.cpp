#include<iostream>
using namespace std;
class college
{
	public:
		int id,m1,m2,m3,total;
		string name;
		student(int id, string name)
		{
		
			cout<<"Enter the id:\n"<<id;
			cout<<"\nEnter the name:\n"<<name;
		}
		student(int mark1,int mark2,int mark3)
		{
			int a=mark1;
			int b=mark2;
			int c=mark3;
			total=a+b+c;
			cout<<"\nTotal is:\n"<<total;
		}
		};
		int main()
		{
			college c;
			c.student(01,"rama");
			c.student(85,86,89);
			return 0;
		}

