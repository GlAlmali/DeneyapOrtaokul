//Grafik programlarýnda kullanmak üzere noktanesnelerini tanýmlamak için bir Nokta sýnýfý oluþturalým.
//Noktalar iki boyutlu düzlemde yeralacaðýndan özellik olarak x ve y koordinatlarý olmak üzere
//iki adet koordinat bilgisine sahiptir.Programýnýzda noktalarýn sahip olmasý gerekenyetenekler (davranýþlar) ise þunlar olmalýdýr:
//Noktalar, düzlemde herhangi bir yerekonumlanabilmeli: git fonksiyonu
//Noktalar bulunduklarý koordinatlarý ekrandagösterebilmeli: goster fonksiyonu
//Noktalar, sýfýr (0,0) koordinatýnda olupolmadýklarý sorusunu yanýtlayabilmeli:sifir_mi fonksiyonu
#include <iostream>
using namespace std;
class Nokta{
    int x,y;
public:
    void git(int, int);
    void goster();
    void sifir_mi();
};
void Nokta::git(int yeni_x, int yeni_y)
{
    x = yeni_x;
    y = yeni_y;
}
void Nokta::goster()
{
    cout << "X noktasi: " << x << ", Y noktasi: " << y << endl;
}
void Nokta::sifir_mi()
{
    if ((x == 0) && (y == 0))
        cout << "n1 su anda sifir noktasindadir." << endl;
    else
        cout << "n1 su anda sifir noktasinda degildir." << endl;
}
int main() {
    Nokta n1,n2;
    n1.git(78,34);
    n1.goster();
    n1.git(61,35);
    n1.goster();
    n1.sifir_mi();
    n2.git(0,0);
    n2.sifir_mi();
    return 0;
}
