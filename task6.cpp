#include <iostream>
using namespace std;
main()
{
	float volume;
	float flow1;
	float flow2;
	float hour;
	float filledpool;
	float p1percent;
	float p2percent;
	float filledpercent;
	cout  <<"Volume of the pool in liters: ";
	cin>>volume;
	cout  <<"Flow of pipe 1: ";
	cin>>flow1;
	cout  <<"Flow of pipe 2: ";
	cin>>flow2;
	cout <<"Enter hours: ";
	cin>>hour;
        if(filledpool>= volume)
        {
          cout <<"the pool is over flowing";
        }
	filledpool=(flow1+flow2)*hour;
	p1percent=((flow1*hour)/volume)*100;
        cout  <<p1
    p2percent=((flow2*hour)/volume)*100;
    filledpercent=filledpool/volume*100;
    cout <<"Filled percentage: "  << filledpercent <<endl;

}
