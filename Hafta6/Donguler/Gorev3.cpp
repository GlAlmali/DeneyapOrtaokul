//Rafet ��retmen s�n�f�nda bulunan 10 ��rencinin matematik dersinde ald��� notlar�
//klavyeden teker teker girerek s�n�f�n matematik dersi not ortalamas�n� bulan bir program yazmak istiyor.
//Bunun i�in nas�l bir kod yazmal�d�r?
#include <iostream>
using namespace std;
int main()
{
    int toplam = 0;
    for(int i=0; i < 10; i++)
    {
        int puan;
        cout << i+1 <<". ogrenci puani:";
        cin >> puan;
        toplam += puan;
    }
    cout << "ortalama : " << toplam /10 ;
}
