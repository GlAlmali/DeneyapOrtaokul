//Ali karde�i Bu�ra�n�n 1�den 30�a kadar 3�erli olarak say� saymas�n� istemektedir.
//Buradan hareketle karde�inin do�ru say�p saymad���n� kontrol etmesi i�in bilgisayarda
//1�den 30�a kadar k���kten b�y��e olacak �ekilde 3�e b�l�nebilecek say�lar� ekranda g�stermek istiyor.
//Bunun i�in nas�l bir kod yazmal�?
#include <iostream>
using namespace std;
int main()
{
    for(int i=0; i < 30; i++)
    {
        if(i%3==0) cout << i <<endl;
    }
    return 0;
}
