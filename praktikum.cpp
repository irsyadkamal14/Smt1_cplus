#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    float n1[5] = {};
    float n2[5] = {};
    cout << "Masukkan Nilai MHS 1 : "  << setw(3) "Masukkan Nilai MHS 2 : " << endl;
    for ( int a = 1; a <= 5 ; ++a) {
         cin >> n1[a];
    }

    cout << "Masukkan Nilai MHS 2 : " << endl;
    for ( int b = 1; b <= 5 ; ++b) {
         cin >> n2[b];
    }
    cout << "Mahasiswa 1" << setw(20) << "Mahasiswa 2" << endl;
    for ( int i = 1; i <= 5 ; ++i){
        cout << "Pelajaran" << i << " = " << setw(3) << n1[i] << setw(10) << "Pelajaran" << i
        << " = " << setw(3) << n2[i] << setw(10) << " Rata-Rata Pelajaran " << i
        << setw(5) << (n1[i]+n2[i])/2 << endl;

    }


    return 0;
}
