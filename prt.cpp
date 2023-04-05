#include <iostream>
#include <cmath>
using namespace std;

main()
{
  int number1;
  int number2;
  int total;
  cout <<" Enter number: ";
  cin >>number1;
  cout <<" Enter number: ";
  cin >>number2;
  total=max(number1,number2);
  cout <<total <<"is greater number !!!!" <<endl;
  total=min(number1,number2);
  cout <<total <<"is less number  !!!!"  <<endl;
  total=sqrt(number1);
  cout <<total <<"square root num1: "  <<endl;
  total=pow(number1,number2);
  cout <<total <<"power of num1: "<<endl;
  total=cbrt(number1);
  cout <<total <<"cube root of num1: "<<endl;
  total=ceil(number1);
  cout <<total <<"ceil of num1: "<<endl;
  total=floor(number1);
  cout <<total <<"floor of num1: "<<endl;
}