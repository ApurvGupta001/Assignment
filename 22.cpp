#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
   fstream file;
   
   file.open("sample.txt",ios::out);

	   if(!file)
	   {
	       cout<<"Error in creating file!!!"<<endl;
	       return 0;
	   }
	
	   cout<<"File created successfully."<<endl;
	   //write text into file
	   file<<"ABCD.";
	   //closing the file
	   file.close();
	
	   

   return 0;
}