//G�rev 1: Klavyeden girilen �Merhaba Deneyap!� adl� c�mleyi direkt
//string nesnesine aktar�p sonucu ekrana yazd�ran kodu yazal�m.
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
