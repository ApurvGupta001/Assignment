#include <iostream>
#include <fstream>
 
using namespace std;
 
int main()
{
   fstream file; 
   file.open("sample.txt",ios::in);
   if(!file)
   {
       cout<<"Error in opening file!!!"<<endl;
       return 0;
   }
   char ch; 
   cout<<"File content: ";
   while(!file.eof())
   {
       file>>ch; //read single character from file
       cout<<ch;
   }

   file.close(); //close file

   return 0;
}
