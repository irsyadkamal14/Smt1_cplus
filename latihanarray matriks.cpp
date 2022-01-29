#include <iostream>
using namespace std;

int main(){
    int matriks[3][3] = {
        {1, 3, 5},
        {5, 3, 1},
        {6, 2, 3}
    };

    printf("Isi Data pada indeks ke-(1,0): %d\n", matriks[2][1]);

    return 0;
}
 //note string[2][3] maka posisi, [2] sebagai kolom (vertikal) dan [3] sebagai baris (horizontal)
