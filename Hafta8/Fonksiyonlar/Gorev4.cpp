//Fonksiyona g�nderilen iki say�dan k���k olan� geriye d�nd�ren fonksiyonu yazal�m.
#include <iostream>
using namespace std;
int hangisi_buyuk(int sayi1, int sayi2)
{
    if(sayi1>sayi2)
        return sayi1;
    else
        return sayi2;
}
int main()
{
    int sayi = hangisi_buyuk(10, 20);
    cout << sayi << endl;

    sayi = hangisi_buyuk(44, 12);
    cout << sayi << endl;
}
