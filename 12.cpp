#include <bits/stdc++.h>

using namespace std;

class add
{
	private:
	int n1,n2;
	public:
	add(int n,int m)
	{
		n1=n;
		n2=m;
	}

	int sum()
	{
		int sum=n1+n2;
		return sum;
	}
};

int main()
{
	add obj(2,5);
	cout<<obj.sum()<<endl;
	return 0;
}
