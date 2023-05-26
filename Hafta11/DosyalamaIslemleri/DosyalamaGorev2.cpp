//Görev 2: Klavyeden girilen 10 sayýyý dosyaya yazalým.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ofstream dosya;
    dosya.open("sayilar.txt");
    for (int i= 0; i<10; i++)
    {
        cout << i+1 << ". sayiyi giriniz: ";
        int sayi;
        cin >> sayi;
        dosya << i+1 << ". sayi: ";
        dosya << sayi << endl;
    }
    dosya.close();
}
