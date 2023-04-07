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
    switch(islem)
    {
        case '+':
            cout << "Sayilarin toplami: " << sayi1 + sayi2;
            break;
        case '-':
            cout << "Sayilarin farki: " << sayi1 - sayi2;
            break;
        case '*':
            cout << "Sayilarin carpimi: " << sayi1 * sayi2;
            break;
        case '/':
            cout << "Sayilarin bolumu: " << sayi1 / sayi2;
            break;
        default:
            cout << "Hatali giris yaptiniz.";
    }
}
