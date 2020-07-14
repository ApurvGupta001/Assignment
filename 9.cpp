#include<iostream>
using namespace std;
class my
{
	static int count;
	public:
		my()
		{
			count++;
			
		}
		~my()
		{
			count--;
	
		}
	static void dispnofobjects()
	{
		cout<<count;	
	}
};
int my::count=0;
int main()
{
	my c,v,b,n,m;
	{
		my a,x,y;
			my::dispnofobjects();

	}
	my::dispnofobjects();


}
