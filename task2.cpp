#include <iostream>
using namespace std;
main ( ){
 cout<<"Number of Minutes: ";
    int minutes;
   cin>>minutes;
  cout<<"Frames per Second: ";
    int frames;
    cin>>frames;
     int total;
      total = (minutes*60) * frames;
      cout<<"Total Number of Frames: "<<total;
          }