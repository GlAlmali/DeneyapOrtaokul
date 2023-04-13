//Rafet öðretmen sýnýfýnda bulunan 10 öðrencinin matematik dersinde aldýðý notlarý
//klavyeden teker teker girerek sýnýfýn matematik dersi not ortalamasýný bulan bir program yazmak istiyor.
//Bunun için nasýl bir kod yazmalýdýr?
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
