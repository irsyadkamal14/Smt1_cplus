#include <iostream>

using namespace std;

int main()
{
    int angka;
    int i;

    cout << "Masukkan Angka = ";
    cin >> angka;

    if (angka == 0 || angka == 1){
        cout << angka << " Bukan Angka Prima";
    }

    else if (angka % 2 == 0){
        cout << angka << " Bukan Angka Prima" ;
    }

    else {
        cout << angka << " Termasuk Angka Prima" << endl;
    }
    return 0;
}
