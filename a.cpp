#include <iostream>

using namespace std;

int perkalian (int masukan1, int masukan2);

int main()
{
    int masukan1, masukan2;
    cout << "==== Perkalian 2 Angka ==== \n";
    cout << "Masukkan Angka Pertama: ";
    cin >> masukan1 ;
    cout << "Masukkan Angka Kedua: ";
    cin >> masukan2 ;
    cout << "Hasil Perkalian Tersebut: " << perkalian( masukan1, masukan2 ) << endl;

    return 0;
}
int perkalian (int x, int y)
{

    return x*y;

}
