//1-100 aras� say�lar�n toplam�n� dosyaya yaz�n�z
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int toplam = 0;
    for(int i=1;i<100;i++)
        toplam += i;
    ofstream dosya("sonuc.txt", ios::app);
    if(dosya.is_open())
    {
        dosya << toplam;
        cout << toplam;
    }
    else
    {
        cout << "Dosya Okunamadi!";
    }
}
