#include <iostream>
using namespace std;
float taxcalculator(char type , float price);
main()
{
 while(true)
 {
  char type;
  float price;
  cout << "The vehicle type is: ";
  cin >>type;
  cout << "The price of vehicle: ";
  cin >>price;
  price=taxcalculator(type , price);
  cout << "Your price after tax is: "  <<price   <<endl;
 }
}
 float taxcalculator(char type , float price)
  {
  float taxamount;
  float finalprice;
   if(type=='M')
   {
     taxamount=price*6/100;
   } 
   if(type=='E')
   {
     taxamount=price*8/100;
   }  
   if(type=='S')
   {
     taxamount=price*10/100;
   }  
   if(type=='V')
   {
     taxamount=price*12/100;
   }  
   if(type=='T')
   {
     taxamount=price*15/100;
   } 
   finalprice=price+taxamount;
   return finalprice;
  }









  