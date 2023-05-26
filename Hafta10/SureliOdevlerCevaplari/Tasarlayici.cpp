//Bir futbol takýmýnýn teknik direktörü, futbolcularýn ad-soyad, forma numarasý ve
//attýðý gollerin sayýsýný tutmak için bir program hazýrlamak ister.
//Teknik direktör bunun için örnek bir program yazar.
//Programda örnek olarak Futbolcu sýnýfyapýsý ve bu sýnýfa ait 2 futbolcunun
//bilgileri nesne olarak tutulmaktadýr. Bu programýn kodlarýný tasarlayýnýz.
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
