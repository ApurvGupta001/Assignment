#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[2][2],b[2][2],res[2][2];
    for(int x=0;x<2;x++)
    {
    	for(int y=0;y<2;y++)
    	{
    		cin>>a[x][y];
    	}
    }
    for(int x=0;x<2;x++)
    {
    	for(int y=0;y<2;y++)
    	{
    		cin>>b[x][y];
    	}
    }
    res[0][0]=a[0][0]*b[0][0]+a[0][1]*b[1][0];
    res[0][1]=a[0][0]*b[0][1]+a[0][1]*b[1][1];
    res[1][0]=a[1][0]*b[0][0]+a[1][1]*b[1][0];
    res[1][1]=a[1][0]*b[0][1]+a[1][1]*b[1][1];
    for(int x=0;x<2;x++)
    {
    	for(int y=0;y<2;y++)
    	{
    		cout<<res[x][y]<<' ';
    	}
    	cout<<endl;
    }
    
    
}
