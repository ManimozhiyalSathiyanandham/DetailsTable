#include<iostream>
using namespace std;
class college
{
	public:
		int rollno;
		string name;
		int mark1,mark2,mark3;
		float average;
		total()
		{
			cout<<"The average of a student :\n";
			cout<<"Enter mark1\n";
			cin>>mark1;
			cout<<"Enter mark2\n";
			cin>>mark2;
			cout<<"Enter mark3\n";
			cin>>mark3;
			average=(mark1+mark2+mark3)/3;
			cout<<"Average is :\n"<<average;
		}
	};
	class student_details:public college
	{
		public:student()
		{
			cout<<"Enter the rollno:\n";
			cin>>rollno;
			cout<<"Enter the name:\n";
			cin>>name;
			
		}
	};
	int main()
	{
		student_details s;
		s.student();
		s.total();
		return 0;
	}

