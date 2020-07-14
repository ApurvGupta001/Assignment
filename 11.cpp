#include <iostream>
using namespace std;

class Student
{
	private:
		int rNo;
		float perc;
		//private member functions
		void inputOn(void)
		{
			cout<<"Input start..."<<endl;
		}
		void inputOff(void)
		{
			cout<<"Input end..."<<endl;
		}		
		
	public:
		//public member functions
		void read(void)
		{
			inputOn();	//calling first member function
			//read rNo and perc
			cout<<"Enter roll number: ";
			cin>>rNo;
			cout<<"Enter percentage: ";
			cin>>perc;
			inputOff();     //calling second member function				
		}		
		void print(void)
		{
			cout<<endl;
			cout<<"Roll Number: "<<rNo<<endl;
			cout<<"Percentage: "<<perc<<"%"<<endl;
		}
};
int main()
{
	Student s;
	s.read();
	s.print();
	
	return 0;
}

