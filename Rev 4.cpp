#include <iostream>
using namespace std;

main(){
    int celcius;
    int hasilfahrenheit;
    int hasilreamur;
    int pilih;

    cout << "Masukan suhu dalam celcius : ";
    cin >> celcius;

    cout << endl;
    cout << "1 Reamur" << endl;
    cout << "2 Fahrenheit" << endl;
    cout << "Masukan Pilihan : ";
    cin >> pilih;

    cout << endl;
    switch(pilih){

        case 1 :
            hasilreamur = celcius*4/5;
            cout << celcius << " Celcius = " << hasilreamur << " Reamur";
            break;
        case 2 :
            hasilfahrenheit = (celcius*9/5)+32;
            cout << celcius << " Celcius = " << hasilfahrenheit << " Fahrenheit";
            break;
    }

    return 0;
}
