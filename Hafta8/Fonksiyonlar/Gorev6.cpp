//Ýki dizi içerisindeki en büyük iki sayýnýn
//toplamýný bulan programý fonksiyon kullanarak yazalým.
#include <iostream>
using namespace std;
int enbuyuk(int dizi[5])
{
    int enbuyuk = dizi[0];
    for (int i=1; i<5; i++)
    {
        if (enbuyuk < dizi[i])
            enbuyuk = dizi[i];
    }
    return enbuyuk;
}
int main()
{
    int dizi1[] = {5,7,11,48,45};
    int dizi2[] = {3,47,13,58,38};

    int enbuyuk1 = enbuyuk(dizi1);
    cout << "1. dizinin en buyugu: " << enbuyuk1 << endl;

    int enbuyuk2 = enbuyuk(dizi2);
    cout << "2. dizinin en buyugu: " << enbuyuk2 << endl;

    cout << "Toplamlari: " << enbuyuk1+enbuyuk2;
}
