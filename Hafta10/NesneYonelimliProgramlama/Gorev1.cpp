//Birinci görev: “Ogrenci” isimli bir sýnýf tanýmlayarak, bu sýnýfta iki öðrenci nesnesi oluþturmak istenmektedir.
//Sýnýf tanýmý içerisinde öðrenci numarasý, ad ve soyad üyeleri tutulacaktýr.
//Sýnýf içerisinde ana fonksiyondan gelen bilgileri atamak için “deger_ata” ve
//atanan bilgileri göstermek için de “goster” isimli fonksiyon oluþturulmasý istenmektedir.
//Ana fonksiyonda iki öðrenci nesnesi tanýmlayarak “deger_ata” fonksiyonu ile
//iki adet öðrenci bilgisini gönderin ve “goster” fonksyionu kullanarak da öðrenci bilgilerini ekrana yazdýrýnýz.
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
