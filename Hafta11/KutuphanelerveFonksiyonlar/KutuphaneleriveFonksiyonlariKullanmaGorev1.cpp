//Klavyeden karakterleri sırasıyla girilen “Arda” ismini “a” değişken adıyla karakter dizisinde,
//“Duru” ismini ise “b” değişken adıyla katarda tutarak ekrana yazdıran kodu oluşturunuz.
#include<iostream>
using namespace std;
int main()
{
    char a[4];
    char b[5];
    int i;
    cout << "Ilk ismin karakterlerini giriniz: " << endl;
    for(i=0; i < 4; i++) {
        cin >> a[i];
    }
    cout << "Ikinci ismin karakterlerini giriniz: " << endl;
    for(i=0; i < 4; i++) {
        cin >> b[i];
    }
    b[4] = '\0';
    cout << "Ilk isim: ";
    for(i=0; i < 4; i++) {
        cout << a[i];
    }
    cout << "\nIkinci isim: ";
    cout << b;
    return 0;
}
