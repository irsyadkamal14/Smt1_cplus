#include <iostream>

using namespace std;
int main()
{
    int masukan;
    cin >> masukan;

    for (int i=0; i<masukan; i++){cout << "* ";}
    cout << endl;

    for (int i=0; i<masukan-2; i++){
        cout << "*";
        for (int j=0; j< masukan-2; j++){cout << "  ";}
        cout << " *";
        cout << endl;}

    for (int i=0; i<masukan; i++){cout << "* ";}
    cout << endl;



    return 0;
}
