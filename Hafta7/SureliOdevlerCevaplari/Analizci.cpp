//Arkada��n (bilgisayar) akl�ndan 1-9 aras�nda rastgele bir say� tutar.
//Sen de tutulan bu say�y� 3 tahminde bulmaya �al��an bir program yaz�yorsun.
//Kural gere�i tutulan say�y� 3 tahminde bulamazsan oyun sona erer.
//E�er 3 tahminden birinde say�y� bulursan program tutulan say�y� ka��nc� tahmin hakk�nda buldu�unu ekrana yazd�r�r.
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int sayi;
    int tahmin = -1;
    int tahmin_sayisi = 0;
    int tahmin_limiti = 3;
    bool outOfGuesses = false;
    srand(time(NULL));
    sayi = rand() % 9 + 1;
    //cout << sayi;
    while(tahmin != sayi && tahmin_sayisi < tahmin_limiti){
        cout << "Tahmininizi girin: ";
        cin >> tahmin;
        tahmin_sayisi++;
    }
    if(tahmin == sayi){
        cout << "Tebrikler, " << tahmin_sayisi <<". denemede kazandiniz!" << endl;
    } else {
    cout << "Uzgunum, 3 hakkinizda bilemediniz!" << endl;
    }
    return 0;
}
