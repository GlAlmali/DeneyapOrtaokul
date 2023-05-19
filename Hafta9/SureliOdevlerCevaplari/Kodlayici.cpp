//Ev sahipleri bahçelerine bir havuz yaptırmak istiyor.
//Bahçeyi inceleyen ustanın, havuzun yapılacağı alanı hesaplamaya ihtiyacı var.
//Ev sahiplerine istedikleri havuzun yarıçapını belirlemelerini istiyor.
//Ev sahiplerinden bu bilgiyi aldıktan sonra, daire şeklindeki havuzun alanını hesaplayan bir programa bilgileri giriyor.
//Ustanın kullandığı programın kodlarını tasarlayınız (Dairenin alanı hesaplama formülü: 𝑝𝑖∗𝑟∗𝑟 ve 𝑝𝑖=3.14).
//İpucu! Sınıf içerisinde tanımlanacak yarıçap bilgisinin usta tarafından erişilebilir olmasına dikkat ediniz.
#include <iostream>
using namespace std;
class Daire {
public:
    float yari_cap;
    float alan_bul(float yari_cap) {
        return 3.14 * yari_cap * yari_cap;
    }
};
int main () {
    Daire daire;
    cout << "Dairenin yaricapini giriniz: " << endl;
    cin >> daire.yari_cap;
    cout<<"Daire Alani: "<<daire.alan_bul(daire.yari_cap)<<"\n";
    return 0;
}
