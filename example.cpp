#include <iostream>
using namespace std;
 int add(int number1, int number2);
 float divide(int number1, int number2);
 int isgreater(int numbver1,int number2);
main()
{
  int number1;
  int number2;
  int total;
  cout << "Enter Number: ";
  cin>>number1;
  cout << "Enter Number: ";
  cin >>number2;
  total=add(number1,number2);
  cout <<"Total sum:"  <<total  <<endl;
  total =divide(number1,number2);
  cout << "Total divide: " <<total <<endl;
  total=isgreater(number1,number2)
  cout << "total greater"  <<total;
}
 int add(int number1, int number2)
{
  int sum=number1+number2;
  return sum;


}
 float divide(int number1, int number2)
{
  int divide=number1/number2;
  return divide; 
}
 int isgreater(int numbver1,int number2)
  {

   if(number1>number2)
    {
     cout << "Number1 is greater";
     return number1;
    }
   if(number2>number1)
    {
     cout << "Number2 is greater";
     return number2;
    }
  }
  
