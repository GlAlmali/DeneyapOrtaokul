//Fonksiyona g�nderilen tam say� tipindeki dizinin
//en b�y�k say�s�n� ekrana yazan fonksiyonu yazal�m.
#include <iostream>
using namespace std;
void buyukbulucu(int dizi[5])
{
    int enbuyuk = dizi[0];
    for (int i=1; i<5; i++)
    {
        if (enbuyuk < dizi[i])
            enbuyuk = dizi[i];
    }
    cout << enbuyuk;
}
int main()
{
    int sayilar[] = {5,3,14,5,8};
    buyukbulucu(sayilar);
}
