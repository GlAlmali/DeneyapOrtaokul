//���nc� g�rev: Oda s�n�f�na ait tasarlad���n�z bir suit odan�n �l�� bilgilerini
//kullan�c�dan alarak suit odan�n alan ve hacmini hesaplayan program� yaz�n�z.
//Program i�erisinde tan�mlayaca��n�z Oda s�n�f�n�n uzunluk, geni�lik ve y�kseklik isimli �yeleri olacakt�r.
//S�n�f i�erisinde tan�mlayaca��n�z �veriAl� fonksiyonu ile ana fonksiyondan gelen verileri alacaks�n�z.
//S�n�f i�erisinde yazaca��n�z �alanHesapla� fonksiyonu ile alan�, �hacimHesapla� fonksiyonu ile hacmi hesaplay�n�z.
//Ana fonksiyonda bir adet Oda nesnesi olu�turarak uzunluk, geni�lik ve y�kseklik bilgilerini
//�veriAl� fonksiyonunu �a��rarak atay�n�z. Daha sonra odan�n alan�n� ve hacmini ekrana yazd�r�n�z.
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
