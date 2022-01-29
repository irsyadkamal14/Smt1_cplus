#include <iostream>
using namespace std;

int main(){
    char ulangi = 'y';
    int counter = 0;

    // perulangan while
    while(ulangi == 'y' || ulangi == 'Y'){
        cout << "Apakah kamu mau mengulang?\n";
        cout << "Jawab (y/t): ";
        cin >> ulangi;

        // increment counter
        counter++;
    }

    cout << "\n\n----------\n";
    cout << "Perulangan Selesai!\n";
    cout << "Kamu mengulang sebanyak " << counter << " kali.\n";

    return 0;
}
