#include <iostream>
using namespace std;
int sam(int number);
main()
{
   int number;
   
   bool num;
   cout <<"Enter your three digit number: ";
   cin>>number;

  num=sam(number);
   if(num==0)
   {
   cout<<" the number is symmetrical ";
   }
   if(num==1)
   {
   cout<<" the number is not symmetrical ";
   }
}  
   int sam(int number )
 {
  int a,b,c,x; 
  a=number%10;
   x=number/10;
   b=x%10;
   c=x/10;
   if(a==c)
   {
    return 0;
   }
   if(a!=c)
   {
    return 1;
   }
  
 }  
  
  