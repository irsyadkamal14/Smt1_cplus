#include <iostream>

 using std::cout;
 using std::cin;
 using std::endl;

int main()
 {
 int grade, // one grade
 aCount = 0, // number of A's
 bCount = 0, // number of B's
 cCount = 0, // number of C's
 dCount = 0, // number of D's
 fCount = 0; // number of F's

 cout << "Enter the letter grades." << endl
 << "Enter the EOF character to end input." << endl;

 while ( ( grade = cin.get() ) != EOF ) {

 switch ( grade ) { // switch nested in while

 case 'A': // grade was uppercase A
 case 'a': // or lowercase a
 ++aCount;
 break; // necessary to exit switch

 case 'B': // grade was uppercase B
 case 'b': // or lowercase b
 ++bCount;
 break;


 case 'C': // grade was uppercase C
 case 'c': // or lowercase c
 ++cCount;
 break;

 case 'D': // grade was uppercase D
 case 'd': // or lowercase d
 ++dCount;
 break;

 case 'F': // grade was uppercase F
 case 'f': // or lowercase f
 ++fCount;
 break;

 case '\n': // ignore newlines,
 case '\t': // tabs,
 case ' ': // and spaces in input
 break;

 default: // catch all other characters
 cout << "Incorrect letter grade entered."
 << " Enter a new grade." << endl;
 break; // optional
 }
 }

 cout << "\n\nTotals for each letter grade are:"
 << "\nA: " << aCount
 << "\nB: " << bCount
 << "\nC: " << cCount
 << "\nD: " << dCount
 << "\nF: " << fCount << endl;

 return 0;
 }
