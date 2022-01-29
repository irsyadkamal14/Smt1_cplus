#include <iostream>

using namespace std;

int maximum( int, int, int );
int main()

{
    int a, b, c;

    cout << "Menentukan Nilai Terbesar dari 3 buah angka" << endl;

    cout << "Masukan angka 1 : ";
    cin >> a;
    cout << "Masukan angka 2 : ";
    cin >> b;
    cout << "Masukan angka 3 : ";
    cin >> c;

    cout << "Maximumnya adalah : " << maximum( a, b, c ) << endl;
    return 0;
}
int maximum( int x, int y, int z )
{
    int max = x;

    if ( y > max )
        max = y;

    if ( z > max )
        max = z;
    return max;
}
