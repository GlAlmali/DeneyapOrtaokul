//Bir futbol tak�m�n�n teknik direkt�r�, futbolcular�n ad-soyad, forma numaras� ve
//att��� gollerin say�s�n� tutmak i�in bir program haz�rlamak ister.
//Teknik direkt�r bunun i�in �rnek bir program yazar.
//Programda �rnek olarak Futbolcu s�n�fyap�s� ve bu s�n�fa ait 2 futbolcunun
//bilgileri nesne olarak tutulmaktad�r. Bu program�n kodlar�n� tasarlay�n�z.
#include <iostream>
#include <string>
using namespace std;
class Futbolcu{
public:
    string ad_soyad;
    int forma_no;
    int gol_sayisi;
    Futbolcu(string x_ad_soyad, int x_forma_no, int x_gol_sayisi){
        ad_soyad = x_ad_soyad;
        forma_no = x_forma_no;
        gol_sayisi = x_gol_sayisi;
    }
};
int main()
{
    Futbolcu f1("Arda Alp", 21 , 13);
    Futbolcu f2("Burakcem", 23, 17);
    cout << f1.ad_soyad << " " << f1.forma_no << " " << f1.gol_sayisi << "\n";
    cout << f2.ad_soyad << " " << f2.forma_no << " " << f2.gol_sayisi << "\n";
    return 0;
}
