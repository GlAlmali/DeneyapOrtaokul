//G�rev 3: Klavyeden girilen ��renci say�s� kadar s�nav notlar�n� klavyeden okuyup dosyaya yazd�ran program� olu�turunuz.
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
