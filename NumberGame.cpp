#include <bits/stdc++.h>
using namespace std;
int main()
{
     srand(time(0));
     int num=rand() % 10000;
     int guess;
   do
   {
       cout<< " TrY to GUESS my number: "<<endl;
       cin>> guess;

          if ( guess< num)
    {
        cout<< " Too low! Think some high numbers  "<<endl;
    }
    else if ( guess > num)
    {
        cout<< " Too high! think some low numbers "<<endl;
    }
    else
    {
        cout<< " Well done! You GUESS the correct number "<<endl;
    }

   }
   while (guess != num);


    return 0;
}
