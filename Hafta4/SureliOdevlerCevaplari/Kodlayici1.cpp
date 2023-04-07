//Kullanýcýdan alacaðýnýz yarýçap bilgisi ve tanýmlayacaðýnýz sabit pi = 3.14 deðerini kullanarak dairenin alaný ve çevresini hesaplayýp ekrana yazdýran programý kodlayýnýz.
#include <iostream>
using namespace std;
int main()
{
    int yari_cap;
    const float PI_DEGERI = 3.14;
    float alan, cevre;
    cout << "Dairenin yaricap uzunlugunu giriniz: ";
    cin >> yari_cap;
    alan = PI_DEGERI * yari_cap * yari_cap;
    cout << "Dairenin alani: " << alan;
    cevre = 2 * PI_DEGERI * yari_cap;
    cout << "\nDairenin cevresi: " << cevre;
    return(0);
}
