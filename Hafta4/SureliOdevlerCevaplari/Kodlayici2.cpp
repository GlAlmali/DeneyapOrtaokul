//2 ki�inin ya�lar� toplam�n� hesaplay�p, ekrana yazd�ran program�n kodunu yaz�n�z.
#include <iostream>
using namespace std;
int main()
{
    int yas1, yas2, yas3;
    cout << "1. kisinin yasini giriniz: ";
    cin >> yas1;
    cout << "2. kisinin yasini giriniz: ";
    cin >> yas2;
    yas3 = yas1+yas2;
    cout << "\nYaslarinizin toplami: " << yas3;
    return 0;
}
