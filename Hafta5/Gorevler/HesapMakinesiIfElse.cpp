#include <iostream>
using namespace std;
int main()
{
    int sayi1, sayi2;
    char islem;
    cout << "Birinci sayi: ";
    cin >> sayi1;
    cout << "Ikinci sayi: ";
    cin >> sayi2;
    cout << "Islem giriniz (+, -, *, /): ";
    cin >> islem;
    if (islem == '+')
        cout << "Sayilarin toplami: " << sayi1 + sayi2;
    else if (islem == '-')
        cout << "Sayilarin farki: " << sayi1 - sayi2;
    else if (islem == '*')
        cout << "Sayilarin carpimi: " << sayi1 * sayi2;
    else if (islem == '/')
        cout << "Sayilarin bolumu: " << sayi1 / sayi2;
    else
        cout << "Hatali giris yaptiniz.";
}
