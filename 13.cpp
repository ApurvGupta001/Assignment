#include <iomanip> 
#include <iostream> 
using namespace std; 
  
int main() 
{ 
 	int num;
	cin>>num; 
	cout << "Before setting the width: \n";
        cout << num << endl; 
	cout << "Setting the width";
        cout << " using setw to 5: \n";
        cout << setw(5); 
   	cout << num << endl; 
    	return 0; 
} 
