//Fadime, 10 arkada��n�n Facebook be�eni say�lar�n�n toplam�n� ve be�eni ortalamalar�n� merak etmektedir.
//Bu ama�la bir program yazmak ister, ancak yard�ma ihtiyac� vard�r.
//Fadime i�in bu program� sen tasarlar m�s�n?
#include <iostream>
using namespace std;
int main()
{
    int sayilar[] = {17, 13, 12, 9, 6, 11, 3, 14, 2, 19};
    int toplam = 0, n = 10;
    float ort;
    cout << "Dizi: " << endl;
    for (int i=0; i < n; i++)
    {
        cout << sayilar [i] << " ";
        toplam += sayilar[i];
    }
    cout << "\nDizinin toplami: " << toplam << endl;
    ort = (float)toplam / n;
    cout << "Dizinin ortalamasi: " << ort << endl;
    return 0;
}
