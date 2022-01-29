#include <iostream>

using namespace std;

int main()
{
    int masukan = 5;
    int angka[4]={};

    for( int i=0; i < masukan ; ++i ){
        cout << "Masukan angka : ";
        cin >> angka [i];
    }
    cout << "=== Hasil Angka ===" << endl;
    for( int i=5; i>=1; i-=1 ){
        cout << angka[i-1] <<endl;
    }

    return 0;
}
