#include <iostream>
using namespace std;
main()
{
  int hour;
  int min;
  int changemin;
  int minutes;
  cout<<"Enter Hour: ";
  cin>>hour;
  cout<<"Enter Minutes: ";
  cin>>min;
  changemin=min+15;
  if (changemin>=60)
  {
  	hour=hour+1;
  	changemin=changemin%60;
  }
  cout <<"The time after fifteen minutes: "  <<hour  <<":"  <<changemin  <<endl;
  

}
  
