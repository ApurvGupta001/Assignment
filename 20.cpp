#include <bits/stdc++.h>

using namespace std;

class pairs
{
	private:
		int f;
		int s;
	public:
		void input()
		{
			cin>>f>>s;
		}
		pairs operator+(pairs a)
		{
			pairs ans;
			ans.f=a.f+f;
			ans.s=a.s+s;
			return ans;
		}
		void print()
		{
			cout<<f<<' '<<s<<endl;
		}
};

int main()
{
    pairs a,b;
    a.input();
    b.input();
    pairs result=a+b;
    result.print();
}
