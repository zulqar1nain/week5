#include <iostream>
#include <cmath>
using namespace std;
main()
{
  float a;
  float b;
  float c;
  float square;
  float xy;
  float add;
  float root;
  float sub1;
  float sub2;
  float total1;
  float total2;
  cout << "Enter a: ";
  cin>>a;
  cout << "Enter b: ";
  cin>>b;
  cout << "Enter c: ";
  cin>>c;
  square=b*b;
  cout <<"power of b: "  <<square <<endl;
  xy=4*a*c;
  cout <<"multiply of 4ac: "  <<xy  <<endl;
  add=square-xy;
  cout <<"square b adding 4ac: "  <<add  <<endl;
  root=sqrt(add);
  cout <<"square root is: "  <<root  <<endl;
  sub1=-b+root;
  cout <<"by adding is: "  <<sub1  <<endl;
  sub2=-b-root;
  cout <<"by adding is: "  <<sub2  <<endl;
  total1=sub1/(2*a);
  cout <<"The value 1 is: "  <<total1  <<endl;
  total2=sub2/(2*a);
  cout <<"the value 2 is: "   <<total2  <<endl;
  
  
  
}
  
  
