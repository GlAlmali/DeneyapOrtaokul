//Birinci g�rev: �Ogrenci� isimli bir s�n�f tan�mlayarak, bu s�n�fta iki ��renci nesnesi olu�turmak istenmektedir.
//S�n�f tan�m� i�erisinde ��renci numaras�, ad ve soyad �yeleri tutulacakt�r.
//S�n�f i�erisinde ana fonksiyondan gelen bilgileri atamak i�in �deger_ata� ve
//atanan bilgileri g�stermek i�in de �goster� isimli fonksiyon olu�turulmas� istenmektedir.
//Ana fonksiyonda iki ��renci nesnesi tan�mlayarak �deger_ata� fonksiyonu ile
//iki adet ��renci bilgisini g�nderin ve �goster� fonksyionu kullanarak da ��renci bilgilerini ekrana yazd�r�n�z.
#include <iostream>
#include <cstring>
using namespace std;
class Ogrenci {
public:
    int ogr_no;
    char ogr_ad[20];
    char ogr_soyad[20];
    void deger_ata(int no, char ad[], char soyad[])
    {
        ogr_no = no;
        strcpy(ogr_ad, ad);
        strcpy(ogr_soyad, soyad);
    }
    void goster(){
        cout<<"Ogrenci Bilgi: " << ogr_no <<" "<< ogr_ad << " " << ogr_soyad << endl;
    }
};
int main(void) {
    Ogrenci ogr1;
    Ogrenci ogr2;
    ogr1.deger_ata(372, "Arda", "Ozcan");
    ogr2.deger_ata(624, "Duru", "Ozen");
    ogr1.goster();
    ogr2.goster();
    return 0;
}
