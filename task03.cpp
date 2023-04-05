#include <iostream>
#include <windows.h>
using namespace std;
float taxCalculator(char code, float price);
main()
{
char code;
float price,finalprice;
cout<<"Enter Price of vehicle: ";
cin>>price;
cout<<"Enter vehicle code (M,E,S,V,T): ";
cin>>code;
finalprice=price+taxCalculator(code,price);
cout<<"The final price on a vehicle of type "<<code<< " after adding the tax : "<<taxCalculator(code,price)<<" ="<<finalprice<<endl;

}
 
float taxCalculator(char code, float price){
float taxamount;
if(code=='M')
{
taxamount=price*(0.06/100);
}
if(code=='E')
{
taxamount=price*(0.8);
}
if(code=='S')
{
taxamount=price*(0.1);
}
if(code=='V')
{
taxamount=price*(0.12);
}
if(code=='T')
{
taxamount=price*(0.15);
}
return taxamount;
}
              