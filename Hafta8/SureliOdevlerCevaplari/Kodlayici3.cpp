//Bir kullanýcýnýn sosyal medyada paylaþtýðý fotoðraflardaki toplam beðeni
//sayýlarýnýn bir dizide saklandýðý düþünülürse; paylaþýlan fotoðraflardaki
//beðenilerin toplamýný geriye döndüren bir fonksiyonu nasýl kodlardýnýz?
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
