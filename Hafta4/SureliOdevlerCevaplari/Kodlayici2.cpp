//2 kiþinin yaþlarý toplamýný hesaplayýp, ekrana yazdýran programýn kodunu yazýnýz.
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
