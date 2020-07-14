#include <iostream>
using namespace std;

double division(int a, int b) {
   return (a/b);
}

int main () {
   int x = 50;
   double y = 0;
   double z = 0;
 
   try {
      if( b == 0 ) 
      throw "Division by zero condition!";
	double z=a/b;
      cout << z << endl;
 	} 
	catch (const char* msg) {
     	cout << msg << endl;
   	}
   return 0;
}
