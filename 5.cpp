#include<iostream>
using namespace std;
int main()
{
	int n;
	cin<<n;
	int d=1;
	while (n/d>= 10) 
        	d *= 10; 
  	  while (n != 0) 
 	   { 
        	int fro = n/d;  
        	int back = n%10;  
      		  if (fro != back)   
        	    {
			cout<<"Not palindrome";
			return 0;
	 	  }  
     		n = (n%d)/10; 
 	        d = d/100; 
    	    }
	cout<<"Yes is palindrome";
	return 0;
} 
    
