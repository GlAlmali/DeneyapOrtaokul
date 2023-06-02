//1-100 arasý sayýlarýn toplamýný dosyaya yazýnýz
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
