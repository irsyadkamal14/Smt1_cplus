#include <iostream>

using namespace std;

int main()
{
    char masukan;

    cout << "Masukkan Pilihan (A/B)= ";
    cin >> masukan;

    switch (masukan){

    case 'A':
        cout << "Selamat Datang" ;
        break;
    case 'B':
        cout << "Selamat Tinggal";
        break;
    default :
        cout << "Sesuaikan Perintah WOI \n\n";
        break;
    }
    return 0;
}
