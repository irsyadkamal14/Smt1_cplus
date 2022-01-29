#include <iostream>


using namespace std;

int main()
{
    char string1[ 20 ], string2[] = "string literal";

    cout << "Enter a String : ";
    cin >> string1;
    cout << "string1 is : " << string1
        << "\nstring2 is : " << string2
        << "\nstring1 with spaces between character is : \n";

    for ( int i = 0; string1[ i ] != '\0'; i++)
        cout << string1[ i ] << ' ';

    cin >> string1;
    cout << "\nstring1 is : " << string1 << endl;

    cout << endl;

    return 0;
}
