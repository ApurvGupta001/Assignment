#include <bits/stdc++.h>

using namespace std;

class add
{
	private:
	int n1,n2;
	public:
	void input()
	{
		cin>>n1;
		cin>>n2;
		return;
	}
	int sum()
	{
		int sum=n1+n2;
		return sum;
	}
};

int main()
{
	add obj;
	obj.input();
	cout<<obj.sum()<<endl;
	return 0;
}
