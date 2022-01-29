#include <iostream>
#include <stdio.h>

using namespace std;


int main()
{
    int total;
    char alinea [150];
    char hitungKata [150];
    string baru = alinea;
    int i, spasi=0;
    cout<<"Masukkan sebuah alinea   : ";
    cin.getline(alinea, sizeof (alinea));
    int state = 1;
    for (i=0; alinea[i]; i++)
    {

            if (alinea[i] == ' ' || alinea[i] == '\n' || alinea[i] == '\t')
            {
                state = 1;
            }
            else if (state == 1)
            {

                state = 0;
                spasi++;
            }

    }

    cout<< "\n";
    cout<< "Jumlah kata adalah      : "<<spasi<< "\n";
    cout<< "\n";

    char a;


    cout<< "Jumlah masing-masih huruf adalah :"<< endl;
    for ( a = 'a'; a <= 'a'; a++)
    {
        int jmlhhuruf = 0;
        for (int x = 0; alinea[x]; x++)
        {
            if(alinea[x] == a)
            {
                jmlhhuruf++;
            }
            total++;
        }
        cout << "Huruf " << a << " berjumlah = " << jmlhhuruf << endl;

    }

    cout<< "Banyaknya huruf adalah  : " << total << endl << endl;





    system("pause");
    cin.get();
    return 0;
}

