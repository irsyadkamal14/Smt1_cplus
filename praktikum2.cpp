#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
		float X[2][2], swap;

		cout<<"Masukkan elemen matriks X"<<endl;
		cout<<"X[0][0] : X[0][1] = ";
		cin>> X[0][0] >> X[0][1];
		cout<< "X[1][0] : X[1][1] = ";
		cin>> X[1][0]>> X[1][1];

		swap = X[0][1];
		X[0][1] = X[1][0];
		X[1][0] = swap;

		cout<< "Transpose dari matriks X adalah: ";
		cout << X[0][0] << " " <<X[0][1]<<endl;
		cout << X[1][0] << " " << X[1][1];
}
