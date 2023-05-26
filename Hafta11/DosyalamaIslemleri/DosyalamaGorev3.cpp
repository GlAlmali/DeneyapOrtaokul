//Görev 3: Klavyeden girilen öðrenci sayýsý kadar sýnav notlarýný klavyeden okuyup dosyaya yazdýran programý oluþturunuz.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    int ogrencisayisi, puan;
    ofstream dosya("not.txt");
    cout << "Kac ogrenci var?"<<endl;
    cin >> ogrencisayisi;
    for (int i=0; i<ogrencisayisi; i++)
    {
        cout << i+1 << ". ogrencinin puani: ";
        cin >> puan;
        dosya << i+1 << ". ogrencinin puani: ";
        dosya << puan << endl;
    }
    dosya.close();
}
