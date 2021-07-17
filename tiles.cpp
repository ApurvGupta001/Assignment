#include <iostream>

using namespace std;

int main()
{
    int n,i=1,j=3;
	cout<<"Enter the number of tiles\n";
	cin>>n;
	for(;j<n;j++)
	{
		if((j-i)!=0 && n%(j-i)==0)
		{	
			cout<<"\nThe maximum possible colour the path can be painted of is :"<<j-i;
			break;
		}
		else if(j==n-1)
			cout<<"\nThe maximum possible colour the path can be painted of is :"<<n;

	}
    return 0;
}
