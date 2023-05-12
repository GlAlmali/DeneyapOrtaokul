//Parametre olarak gönderilen iki sayýnýn toplamýný geriye döndüren
//bir fonksiyonu oluþturmak isteseydiniz nasýl bir kod yazardýnýz?
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
