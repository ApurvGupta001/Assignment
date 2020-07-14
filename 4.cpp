#include <bits/stdc++.h>

using namespace std;

int multiply(int n)
{
	int mul=2*n;
	return mul;
}

int multiply_static(int n)
{
	static int mul=2*n;
	return mul;
}

int main()
{
	cout<<multiply(3)<<endl;//prints 6
	cout<<multiply(4)<<endl;//prints 8
	cout<<endl;
	cout<<multiply_static(3)<<endl;//prints 6
	cout<<multiply_static(4)<<endl;//still prints 6 
	
}