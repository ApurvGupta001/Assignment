#include<iostream>
using namespace std;
class sum
{
	int a;
	int b;
	public:
		sum()
		{
			a=0;
			b=0;
		}
		void display()
		{
			cout<<"a: "<<a<<endl<<"b: "<<b<<endl;
		}
};
int main(){
	sum s;
	s.display();
}
