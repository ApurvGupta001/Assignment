#include<iostream>
using namespace std;
class sum
{
	int a,b;
	public:
	void input()
	{
		cin>>a>>b;
	}
	void output()
	{
		cout<<a+b<<endl;
	}
	void operator-()
	{
	a=-a;
	b=-b;
	}
};
int main()
{
	sum s;
	s.input();
	cout<<"Before -operation :";
	s.output();
	-s;
	cout<<"After -operation :";
	s.output();
}
	
