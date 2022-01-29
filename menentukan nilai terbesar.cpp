#include <iostream>
using namespace std;

int main()
{
    int nilai1, nilai2, nilai3;
    cout << "Mencari Nilai Maksimum \n";
    cout << "Nilai 1 : ";
    cin >> nilai1;
    cout << "Nilai 2 : ";
    cin >> nilai2;
    cout << "Nilai 3 : ";
    cin >> nilai3;

    if ( nilai3 > nilai2 && nilai3 > nilai1 )
        cout << "Nilai Terbesar : " << nilai3 ;
    else if ( nilai2 > nilai1 && nilai2 > nilai1 )
        cout << "Nilai Terbesar : " << nilai2 ;
    else
        cout << "Nilai Terbesar : " << nilai1 << endl;

return 0;
}
