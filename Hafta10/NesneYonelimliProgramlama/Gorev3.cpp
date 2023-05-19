//Üçüncü görev: Oda sýnýfýna ait tasarladýðýnýz bir suit odanýn ölçü bilgilerini
//kullanýcýdan alarak suit odanýn alan ve hacmini hesaplayan programý yazýnýz.
//Program içerisinde tanýmlayacaðýnýz Oda sýnýfýnýn uzunluk, geniþlik ve yükseklik isimli üyeleri olacaktýr.
//Sýnýf içerisinde tanýmlayacaðýnýz “veriAl” fonksiyonu ile ana fonksiyondan gelen verileri alacaksýnýz.
//Sýnýf içerisinde yazacaðýnýz “alanHesapla” fonksiyonu ile alaný, “hacimHesapla” fonksiyonu ile hacmi hesaplayýnýz.
//Ana fonksiyonda bir adet Oda nesnesi oluþturarak uzunluk, geniþlik ve yükseklik bilgilerini
//“veriAl” fonksiyonunu çaðýrarak atayýnýz. Daha sonra odanýn alanýný ve hacmini ekrana yazdýrýnýz.
#include <iostream>
using namespace std;

class Oda {
private:
    double uzunluk;
    double genislik;
    double yukseklik;

public:
    void veriAl(double uzn, double gns, double yks) {
        uzunluk = uzn;
        genislik = gns;
        yukseklik = yks;
    }
    double alanHesapla() {
        return uzunluk * genislik;
    }
    double hacimHesapla() {
        return uzunluk * genislik * yukseklik;
    }
};
int main() {
    Oda suitOda;
    suitOda.veriAl(3.5, 4.3, 3.2);
    cout << "Suit Oda Alan: " << suitOda.alanHesapla() << endl;
    cout << "Suit Oda Hacim: " << suitOda.hacimHesapla() << endl;
    return 0;
}
