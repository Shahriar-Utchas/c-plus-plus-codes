#include <iostream>
using namespace std;
int main()
{
    string n;
    cout << "Enter a string" << endl;
    getline(cin, n);
    for (int i = 0; i < n.length(); i++)
    {
        n[i] = toupper(n[i]);
    }
    cout << n << endl;
    for (int i = 0; i < n.length(); i++)
    {
        n[i] = tolower(n[i]);
    }
    cout << n;
}