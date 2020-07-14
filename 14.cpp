#include <bits/stdc++.h>

using namespace std;

class Bank
{
	private:
		int balance;
	public:
		Bank(int amt)
		{
			balance=amt;
		}
		void withdraw(int amt)
		{
			if(amt>balance)
			{
				cout<<"Insufficient Balance"<<endl;
				return;
			}
			else
			{
				cout<<"Rs."<<amt<<" withdrawn sucessfully"<<endl;
				balance-=amt;
				return;
			}
		}
		void deposit(int amt)
		{
			balance+=amt;
			cout<<"Rs."<<amt<<" deposited"<<endl;
			return;
		}
		void balance_check()
		{
			cout<<"Balance = "<<balance<<endl;
			return;
		}
};

int main()
{
    Bank obj(1000);
    obj.balance_check();
    obj.withdraw(1000000);
    obj.withdraw(50);
    obj.deposit(200);
    obj.balance_check();
}
