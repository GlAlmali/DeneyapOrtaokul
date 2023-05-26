//Görev 1: Klavyeden girilen “Merhaba Deneyap!” adlý cümleyi direkt
//string nesnesine aktarýp sonucu ekrana yazdýran kodu yazalým.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ofstream dosya;
    dosya.open("cb.txt", ios::app);
    string cumle;
    getline(cin, cumle);
    cout << cumle << endl;
    dosya << cumle << endl;
    dosya.close();
}
