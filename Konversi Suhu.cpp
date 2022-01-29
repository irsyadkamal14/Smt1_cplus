#include <iostream>

 using namespace std;


 int main()
 {
 int suhu;
 int perhitungan;
 string huruf;

 cout << "Input :"<<endl;
 cout << "Suhu dalam derajat Celcius : ";
 cin >> suhu;
 cout << "Suhu dikonversi ke bentuk Reamur atau Fahrenheit (masukkan R atau F)"<<endl;
 cin >> huruf;

    if(huruf == "F" || huruf == "f"){
        perhitungan = (suhu*9/5)+32;
        cout << suhu << " Derajat Celcius = " << perhitungan << " Fahrenheit";
    }else if(huruf == "R" || huruf == "r"){
        perhitungan = suhu*4/5;
        cout << suhu << " Derajat Celcius = " << perhitungan << " Reamur";
 }


return 0;
 }
