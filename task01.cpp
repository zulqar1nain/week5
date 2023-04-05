#include <iostream>
using namespace std;
main()
{ 
  int length;
  int width;
  int height;
  int volumeincm,volumeinmm,volumeinkm;
  string name;
  float volume;
  cout<<"Enter length: ";
  cin>>length;
  cout<<"Enter width: ";
  cin>>width;
  cout<<"Enter height: ";
  cin>>height;
  cout<<"Enter the unit  ";
  cin>>name;

  volume=(length*width*height)/3;
  if(name == "cm")
  {
  volumeincm=volume*1000000;
  cout<<volumeincm;
  }
  if(name == "mm")
  {
  volumeinmm=volume*1000000000;
   cout<<volumeinmm;
  }
  if( name == "km")
  {
  volumeinkm=volume/1000000000;
  cout<<volumeinkm;
  }
  
}
   