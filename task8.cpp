#include <iostream>
using namespace std;
main ( ) {
   cout<<"Enter vegetable price per kilogram (in coins): ";
       float vegetable;
      cin>>vegetable;
   cout<<"Enter fruit price per kilogram (in coins): ";
      float fruit;
      cin>>fruit;
   cout<<"Enter total kilograms of vegetables: ";
           int totalveg;
     cin>>totalveg;
 cout<<"Enter total kilograms of fruits: ";
        int totalfruit;
       cin>>totalfruit;
       float earnings; 
       earnings = ((vegetable * totalveg) + (fruit * totalfruit))/1.94;
    cout<<"Total earnings in Rupees (Rps): "<<earnings;
       }