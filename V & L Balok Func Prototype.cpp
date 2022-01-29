#include <iostream>

using namespace std;


int volume( int, int, int), luas( int, int);

int main()
{
    int x, y, z;

    cout << "Masukkan Panjang, Lebar, Tinggi = \n";
    cin >> x >> y >> z;


    cout << "Volume Balok Tersebut adalah : " << volume(x, y, z) << "\n";
    cout << "Luas Balok Tersebut adalah : " << luas(x, y) << endl;
    return 0;

}

int volume(int x, int y, int z)
{

    return x*y*z;
}
int luas( int x, int y)
{
    return x*y;
}
