//Bir kullan�c�n�n sosyal medyada payla�t��� foto�raflardaki toplam be�eni
//say�lar�n�n bir dizide sakland��� d���n�l�rse; payla��lan foto�raflardaki
//be�enilerin toplam�n� geriye d�nd�ren bir fonksiyonu nas�l kodlard�n�z?
#include <iostream>
using namespace std;
int dizi_topla(int dizi[5])
{
    int toplam = 0;
    for(int i=0;i<5;i++)
        toplam = toplam + dizi[i];
    return toplam;
}
int main()
{
    int sayilar[5] = {5,6,9,3,2};
    int sonuc = dizi_topla(sayilar);
    cout << sonuc;
}
