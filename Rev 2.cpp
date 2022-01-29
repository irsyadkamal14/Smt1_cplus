
#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    int sisi1;
    int sisi2;
    int A;

    cout << "Masukkan Inputan" << endl;

    cout << "Masukkan Sisi 1 = " ;
    cin >> sisi1 ;
    cout << "Masukkan Sisi 2 = " ;
    cin >> sisi2 ;

    A = sqrt((sisi1*sisi1)+(sisi2*sisi2));
    cout << "Nilai Sisi 1 = " << sisi1 << endl;
    cout << "Nilai Sisi 2 = " << sisi2 << endl;
    cout << "Panjang Sisi Miring = " << A << endl;
    return 0;
}
