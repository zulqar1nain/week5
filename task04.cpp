#include <iostream>
#include <windows.h>
using namespace std;
main()
{
    float workingdays;
int neededhours,days,numberofworkers,time;
cout<<"Enter needed hours to complete Task: ";
cin>>neededhours;
cout<<"Enter Days that Firm has: ";
cin>>days;
cout<<"Enter number of all workers: ";
cin>>numberofworkers;
workingdays=days-(days*0.1);
time=numberofworkers*10*workingdays;
if(time>neededhours)
{
time=time-neededhours;
cout<<"Yes! "<<time<<" hours left."<<endl;
}
if(time<neededhours)
{
time=neededhours-time;
cout<<"Not enough time!"<<time<<" hours needed."<<endl;
}

} 