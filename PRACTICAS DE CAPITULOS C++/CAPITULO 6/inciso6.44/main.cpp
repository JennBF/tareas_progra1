#include <iostream>
using namespace std;

int misterio(int, int);

int main()
{
    int x=0;
    int y=0;

    cout << "Escriba dos enteros: ";
    cin >> x>>y;
    cout << "El resultado es " <<misterio (x,y) << endl;
}

int misterio (int a, int b)
{
    if (1==b)
        return a;
    else
        return a + misterio (a, b -1);
}
