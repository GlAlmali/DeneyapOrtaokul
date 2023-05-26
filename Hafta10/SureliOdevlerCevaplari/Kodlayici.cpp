//Grafik programlar�nda kullanmak �zere noktanesnelerini tan�mlamak i�in bir Nokta s�n�f� olu�tural�m.
//Noktalar iki boyutlu d�zlemde yeralaca��ndan �zellik olarak x ve y koordinatlar� olmak �zere
//iki adet koordinat bilgisine sahiptir.Program�n�zda noktalar�n sahip olmas� gerekenyetenekler (davran��lar) ise �unlar olmal�d�r:
//Noktalar, d�zlemde herhangi bir yerekonumlanabilmeli: git fonksiyonu
//Noktalar bulunduklar� koordinatlar� ekrandag�sterebilmeli: goster fonksiyonu
//Noktalar, s�f�r (0,0) koordinat�nda olupolmad�klar� sorusunu yan�tlayabilmeli:sifir_mi fonksiyonu
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
