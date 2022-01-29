#include <iostream>

using namespace std;

struct Siswa {
  string nama;
  string sekolah;
  unsigned int uangSaku;
};

int main()
{
  struct Siswa siswa01;

  cout << "==++ Pendaftaran Siswa Baru ++==" << endl;
  cout << "Nama: ";
  getline(cin,siswa01.nama);

  cout << "Sekolah: ";
  getline(cin,siswa01.sekolah);

  cout << "Uang saku: ";
  cin >> siswa01.uangSaku;

  cout << endl;

  cout << siswa01.nama <<" bersekolah di " << siswa01.sekolah;
  cout << " dengan uang saku " << siswa01.uangSaku << " per hari" << endl;

  return 0;
}
