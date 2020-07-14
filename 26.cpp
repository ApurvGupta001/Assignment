#include <bits/stdc++.h>

using namespace std;

template<typename T> bool ckmin(T& a, const T& b) 
{
	 if(a>b)
	 {
	 	a=b;
	 	return true;
	 } 
	 else
	{
		return false;
	}
}

int main()
{
    int N;
    cin>>N;
    int ar[N];
    for(int x=0;x<N;x++)
    {
    	cin>>ar[x];
    }
    int minimum=ar[0];
    for(int x=1;x<N;x++)
    {
    	ckmin(minimum,ar[x]);
    }
    cout<<"Minimum = "<<minimum<<endl;
}
