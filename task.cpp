#include <iostream>
#include <cmath>
using namespace std;
float calculatehieght(float base, float degrees);
main()
{
   int base;
   float degrees;
   float hieght;
   float answer;
  cout <<"Enter distance: ";
  cin >>base;
  cout <<"Enter angle of elevation: ";
  cin >>degrees;
  answer=calculatehieght(base,degrees);
  cout <<"hieght: " <<answer <<endl;
}

float calculatehieght(float base, float degrees)
  {
  float radian;
  float radians;
  float  angle;
  float hieght;
  radian=57.2958;
  radians=degrees/radian;
  angle=tan(radians);
  hieght=base*angle;
  return hieght;
 }
   
