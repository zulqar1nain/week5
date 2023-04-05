#include <iostream>
using namespace std;
int add(int num);
main()
{
  int num;
  bool loop;
 
  
  cout <<"Enter number: ";
  cin>>num;
  loop=add(num);
  if(loop==0)
   {
     cout<<" the number is Evenish";
   }
  if(loop==1)
   {
     cout<<" the number is Oddish";
   }
}
  int add(int num)
 {
   int a,x1,b,x2,c,x3,d,x4;
    a=num%10;
    x1=num/10;
    b=x1%10;
    x2=b/10;
    c=x2%10;
    x3=c/10;
    d=x3%10;
    x4=d/10;
    

   if((a+b+c+d+x4)%2==0 )
    {
      return 0;
    }
   if((a+b+c+d+x4)%2!=0 )
    {
      return 1;
    }
 }
  