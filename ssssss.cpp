#include<iostream>

using namespace std;

int square( int );

int main()
{
    for( int x = 1; x<= 10; x++)
        cout << square (x) << "   ";

    cout << endl;

    return 0;

}
int square ( int y )
{

    return y * y;
}
