//------------------------------------------------------
// Month picker program
// Filename:     december.cpp
// Adapted from: K&R page 94 example
// by:           Reginald Wee
// Aim:          To show string initialization
//               and use of the conditional operator
//------------------------------------------------------

#include <iostream>
using namespace std;
int main()
{
   const char *name[] = { "an Illegal month", "January", "February", "March",
   "April", "May", "June", "July", "August", "September", "October",
   "November", "December"};
   int n = 3;
   cout << "Lucky Month Picker.\n";
   cout << "Choose a number between 1-12\n >> ";
   cin >> n;
   n = (n < 1 || n > 12) ? 0 : n;
   cout << "You chose " << name [n];
   cout << "\n bye!";
}

