//Kardeþ olan iki peyzaj ustasý kare þeklinde olan bahçelerine peyzaj yapmak istiyor.
//Her ikisi de kendi bahçelerine çit gerecektir.
//Çit için kare þeklindeki iki bahçenin kenar bilgilerini ölçerek, bahçelerin çevresini hesaplayan bir program tasarlarlar.
//Ancak program düzgün çalýþmamaktadýr.
//Programý düzeltmek zorundalar çünkü çevrelerini hesaplayacaklarý daha pek çok bahçe var.
//Bu iki kardeþe programý baþtan tasarlamalarý için yardým ediniz.
//Ýpucu! Ustanýn kullandýðý hatalý programda sýnýf içerisinde kullanýlacak kenar bilgisi
//deðer atama yoluyla gerçekleþirken, fonksiyon tanýmlama sýnýf dýþýnda yazýlmýþtýr.
//Tasarlayacaðýnýz kodda bu detaylarýn bulunmasýna dikkat ediniz.
#include <iostream>
using namespace std;
class Kare
{
    private:
        float kenar;
    public:
        void deger_atama(float);
        float cevre()
        {
            return 4 * kenar;
        }
};
void Kare::deger_atama (float k) {
    kenar = k;
}
int main () {
    Kare kare;
    kare.deger_atama (4.3);
    cout<<"Kare Cevresi: "<<kare.cevre()<<"\n";
    return 0;
}
