#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
   int i,j,rows;
    cout << " Input number of rows to display the pattern like right angle triangle using an asterisk: "<<endl;

    cin >> rows;

   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   cout<<"*";
	   cout<<endl;
   }
   getch();
}

