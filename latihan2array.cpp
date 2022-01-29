#include <iostream>
using namespace std;

const int MAX_ARRAY = 5;

void ubah(string str[]){
    for(int i=0;i<MAX_ARRAY;++i){
        str[i]="Berubah";
    }
}

int main ()
{
    string nama[MAX_ARRAY]={};

    for(int i=0;i<MAX_ARRAY;++i){
        cout<<"Masukan Nama : ";cin>>nama[i];
    }

    ubah(nama);

    cout<<endl<<"=== Daftar Nama ==="<<endl;
    for(int i=0;i<MAX_ARRAY;++i){
        cout<<(i+1)<<". "<<nama[i]<<endl;
    }

    return 0;
}
