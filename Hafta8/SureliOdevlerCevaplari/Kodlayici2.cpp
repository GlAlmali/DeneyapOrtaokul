//Parametre olarak g�nderilen harfi, yine parametre olarak g�nderilen say� kadar
//ekrana yazd�ran bir fonksiyon tan�mlamak isteseydiniz nas�l kodlard�n�z?
//�rnek kullan�m: tekrar_yaz(�z�,5)
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
