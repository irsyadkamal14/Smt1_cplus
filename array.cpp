#include <iostream>

#include <iomanip>

using namespace std;

int main()
{
    int n[] = {7};

    cout << "Angka 1" << setw(13) << "Angka 2" << endl;

    for ( int i= 1; i < 10; i++)
        cout << setw(7) << i << setw(13) << n[0] << endl;

    cout << "Hasil Perkalian 7 Yaitu : " << endl;
//Penghitungan
    cout << "Angka 1" << setw(13) << "Angka 2"  << setw(18) << "Hasil" <<endl;

    for ( int i= 1; i < 10; i++)
        cout << setw(7) << i << setw(13) << n[0] << setw(18) << i * n[0] << endl;



    return 0;
}
