#include <iostream>
using namespace std;

int main ()
{
    int MAX_ARRAY = 4;
    string nama[MAX_ARRAY]={};

    for(int i=0;i<MAX_ARRAY;++i){
        cout<<"Masukan Nama : ";cin>>nama[i];
    }

    cout<<"=== Daftar Nama === \n";
    for(int i=0;i<MAX_ARRAY;++i){
        cout<<(i+1)<<". "<<nama[i]<<endl;
    }

    return 0;
}
