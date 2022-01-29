#include<iostream>
using namespace std;
int main()
{
int a;
int b;
int c;
cout<<"Masukan Bilangan 1 = ";
cin >>a;

cout<<"Masukan Bilangan 2 = ";
cin >>b;
cout<<endl;

c = a;
a = b;
b = c;

cout<<"Bilangan 1 adalah = "<<a;
cout<<endl;
cout<<"Bilangan 2 adalah = "<<b;

}
