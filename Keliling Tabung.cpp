#include <iostream>

using namespace std;

int main ()
{
    int diameter;
    int tinggi;
    int d;


    cout << "Masukkan Inputan" << endl;

    cout << "Masukkan Diameter Tabung = " ;
    cin >> diameter ;
    cout << "Masukkan Tinggi Tabung = " ;
    cin >> tinggi ;

    d = diameter/2;
    cout << "Jari Jari Tabung adalah = " << d << endl;
    cout << "Tinggi Tabung adalah = " << tinggi << endl;
    cout << "Volume Tabung = " << (22 * d * d * tinggi)/ << endl;
    return 0;
}
