#include <iostream>
 
using namespace std;
const int MAX = 10;
 
int main () 
{
	int var[MAX];
   for(int x=0;x<MAX;x++)
		cin>>var[x];
   int *ptr[MAX];
 
   for (int i = 0; i < MAX; i++) {
      ptr[i] = &var[i]; // assign the address of integer.
   }

   for (int i = 0; i < MAX; i++) {
      cout << "Value of var[" << i << "] = ";
      cout << *ptr[i] << endl;
   }

   return 0;
}