//Parametre olarak gönderilen harfi, yine parametre olarak gönderilen sayý kadar
//ekrana yazdýran bir fonksiyon tanýmlamak isteseydiniz nasýl kodlardýnýz?
//Örnek kullaným: tekrar_yaz(‘z’,5)
#include <iostream>
using namespace std;
void tekrar_yaz(char a, int adet)
{
    for(int i=0;i<adet;i++)
        cout << a;
}
int main()
{
    tekrar_yaz('z',5);
}
