//Yazd���n�z bir programda kullan�c�ya bir karakter katar� i�erisinde,
//ka� tane kelimeden olu�tu�unu sayabilecek bir program yaz�n�n�z.
#include <iostream>
#include <cstring>
using namespace std;
int main()
{ char mesaj[] = "Bugun hava cok guzel!"; int kelimeSayisi = 0; for(int i=0; i<strlen(mesaj);i++)
{ if(mesaj[i] == ' ') kelimeSayisi++;
} cout << "Bu cumlede " << kelimeSayisi+1 << " kelime bulunmaktadir.";
return 0;
}
