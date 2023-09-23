#include <iostream>
using namespace std;
main ( ) {
       cout<<"Enter a 4-digit number: ";
       int number;
       cin>>number;
       int number_2;
        number_2 =  (number)%10;
        int number_3= number/10;
        int number_4=( number_3)%10;
        int number_5= (number_3)/10;
        int number_6= (number_5)%10;
        int number_7=  (number_5)/10;
        int number_8=  (number_7)%10;
        int number_9= number_2 + number_4 + number_6 +number_8;
        cout<<"Sum of the individual digits: "<<number_9;
       }
