//�kinci g�rev: �Ceptelefonu� isimli bir s�n�f tan�mlayarak, bu s�n�fta iki cep telefonu nesnesi olu�turmak istenmektedir.
//S�n�f tan�m� i�erisinde marka, model, fiyat, arama durum ve mesaj durum �yeleri tan�mlanacakt�r.
//Arama durum ve mesaj durum de�i�kenleri bool olarak tan�mlanacakt�r.
//S�n�f i�erisinde ana fonksiyondan gelen fiyat bilgisini atamak i�in bir yap�c� fonksiyon tan�mlay�n�z.
//Yine s�n�f i�erisinde tan�mlayaca��n�z �arama� ve �mesaj� isimli iki fonksiyon ile
//cep telefonu arama ve mesaj durumu bilgisini ekrana yazd�r�n�z.
//Ana fonksiyonda iki cep telefonu nesnesi tan�mlayarak �r�n fiyatlar�n� ekrana yazd�r�n�z.
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
