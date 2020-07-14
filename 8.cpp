#include <bits/stdc++.h>

using namespace std;
typedef long long ll;//typedef for long long
typedef struct
{
	ll first;
	ll second;
}
sample_pr;//sample pair structure
int main()
{
	sample_pr pr;
	cin>>pr.first>>pr.second;
	cout<<"Sum = "<<pr.first+pr.second<<endl;
}
