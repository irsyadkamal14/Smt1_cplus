#include <iostream>

using namespace std;

int main()
{
  int angka;
  int i;
  int angkaprima = true;

  cout << "Masukkan angka = ";
  cin >> angka;

  if (angka == 0 || angka == 1) {
    angkaprima = false;
  }
  else {
    for (i = 2; i <= angka / 2; i++) {
      if (angka % i == 0) {
        angkaprima = false;
        break;
      }
    }
  }

  if (angkaprima)
    cout << angka << " termasuk bilangan prima";
  else
    cout << angka << " bukan bilangan prima";

 cout << endl;
 return 0;
}
