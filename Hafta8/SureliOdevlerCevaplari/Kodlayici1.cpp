//Parametre olarak g�nderilen iki say�n�n toplam�n� geriye d�nd�ren
//bir fonksiyonu olu�turmak isteseydiniz nas�l bir kod yazard�n�z?
#include <iostream>
using namespace std;
int topla(int sayi1, int sayi2)
{
    int toplam = sayi1 + sayi2;
    return toplam;
}
int main()
{
    int sonuc = topla(5,4);
    cout<< sonuc;
}
