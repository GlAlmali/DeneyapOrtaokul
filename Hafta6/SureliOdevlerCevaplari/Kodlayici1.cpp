//Ahmet bilgisayara rastgele 2 say� �rettirip, �retilen say�daki b�y�k olan� ekrana yazd�rmak istiyor.
//Ahmet'in nas�l bir kod yazmas� gerekmektedir?
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int sayi1, sayi2;
    srand(time(0));
    sayi1 = rand();
    cout << sayi1 << endl;
    sayi2 = rand();
    cout << sayi2 << endl;
    if(sayi1>sayi2)
        cout << sayi1;
    else
        cout << sayi2;
}
