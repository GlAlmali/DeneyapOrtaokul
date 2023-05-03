//Fadime, 10 arkadaþýnýn Facebook beðeni sayýlarýnýn toplamýný ve beðeni ortalamalarýný merak etmektedir.
//Bu amaçla bir program yazmak ister, ancak yardýma ihtiyacý vardýr.
//Fadime için bu programý sen tasarlar mýsýn?
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
