#include <iostream>
using namespace std;
main ( ) {
     cout<<"Enter the movie name: ";
        string name;
       cin>>name;
   cout<<"Enter the adult ticket price: $";
          float adult_price;
          cin>>adult_price;
     cout<<"Enter the child ticket price: $";
       float child_price;
        cin>>child_price;
     cout<<"Enter the number of adult tickets sold: ";
         int adultnumber;
         cin>>adultnumber;
    cout<<"Enter the number of child tickets sold: ";
         int childnumber;
       cin>>childnumber;
     cout<<"Enter the percentage of the amount to be donated to charity: ";
            float charity;
           cin>>charity;
           float total;
              total = adult_price *adultnumber + child_price*childnumber;
             float donation;
                donation = total *  (charity/100);
              float remaining;
                 remaining = total - donation;
                cout<<endl;
       cout<<"Movie: "<<name<<endl;
      cout<<"Total amount generated from ticket sales: $"<<total<<endl;
      cout<<"Donation to charity ("<<(charity)<<"%): $"<<donation<<endl;
      cout<<"Remaining amount after donation: $"<<remaining;
                          
}