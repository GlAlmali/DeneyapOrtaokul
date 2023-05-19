//Ýkinci görev: “Ceptelefonu” isimli bir sýnýf tanýmlayarak, bu sýnýfta iki cep telefonu nesnesi oluþturmak istenmektedir.
//Sýnýf tanýmý içerisinde marka, model, fiyat, arama durum ve mesaj durum üyeleri tanýmlanacaktýr.
//Arama durum ve mesaj durum deðiþkenleri bool olarak tanýmlanacaktýr.
//Sýnýf içerisinde ana fonksiyondan gelen fiyat bilgisini atamak için bir yapýcý fonksiyon tanýmlayýnýz.
//Yine sýnýf içerisinde tanýmlayacaðýnýz “arama” ve “mesaj” isimli iki fonksiyon ile
//cep telefonu arama ve mesaj durumu bilgisini ekrana yazdýrýnýz.
//Ana fonksiyonda iki cep telefonu nesnesi tanýmlayarak ürün fiyatlarýný ekrana yazdýrýnýz.
#include <iostream>
using namespace std;
class Ceptelefonu{
public:
    char marka[30];
    char model[30];
    int fiyat;
    bool aramaDurum;
    bool mesajDurum;

    Ceptelefonu(int x_fiyat){
        fiyat = x_fiyat;
    }
    ~Ceptelefonu(){
        cout << "Nesne yok edildi." << endl;
    }
    void arama();
    void mesaj_gonder();
};
void Ceptelefonu::arama()
{
    aramaDurum = true;
    cout << "Istediginiz arama gerceklestiriliyor." << endl;
}
void Ceptelefonu::mesaj_gonder()
{
    mesajDurum = true;
    cout << "Istediginiz mesaj gonderiliyor." << endl;
}
int main(){
    Ceptelefonu urun1(4500);
    Ceptelefonu urun2 = Ceptelefonu(3750);
    cout << "Urun 1 baslangic fiyati: " << urun1.fiyat << endl;
    cout << "Urun 2 baslangic fiyati: " << urun2.fiyat << endl;
    return 0;
}
