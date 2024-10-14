/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
	double temp = 0;
	cout << "Enter the temperature (or 999 to quit): " << endl;
	cin >> temp;
	
	while (temp != 999) {
	    if (temp <= 32) {
	        cout << "The temperature " << temp << " degrees is freezing!" << endl;
	        cout << endl;
	       } 
	       else {
	   cout << "The temperature " << temp << " degrees is above freezing!" << endl;
	       cout << endl;
	       }
	           
	       cout << "Enter the temperature (or 999 to quit): "  << endl;
	       cin >> temp;
	   }
	        
	return 0;
}