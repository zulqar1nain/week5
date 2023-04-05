#include <iostream>
using namespace std;
main()
{
  int size;
  float p1;
  float p2;
  float hours;
  float volume;


   cout <<"Enter size: ";
   cin>>size;
   cout <<"Enter flow of rate first pipe per hour: ";
   cin>>p1;
   cout <<"Enter flow of rate second pipe per hour: ";
   cin>>p2;
   cout <<"Enter Hours: ";
   cin>>hours;
    float volume1;
    float volume2;
    volume1=p1*hours;
    volume2=p2*hours;
    float total;
    total=volume1+volume2;
    if(total<size)
    {
      volume=(volume1/size)*100;
      cout<<"less flow"  <<volume  <<endl;
    }
    if(total>size)
    {
      volume=(volume2/size)*100;
      cout<<"over flow: "  <<volume  <<endl;
    }
   }