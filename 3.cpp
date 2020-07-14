#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
for(int i=1;i*i<n;i++)
{
	if(n*i==0)
	{
		cout<<"No the number is not Prime";
		return 0;
	}

}
cout<<"Yes the number is prime";
return 0;
}
