//Klavyeden girilen c�mledeki �a� veya �A� karakterlerini sayan program� yaz�n�z.
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char mesaj[100];
    cin.getline(mesaj,100);
    int sayac = 0;
    for(int i=0;i<strlen(mesaj);i++)
    {
        if(mesaj[i]=='a' || mesaj[i]=='A')
            sayac++;
    }
    cout << "Bu cumlede "<< sayac <<" adet a vardir.";
    return 0;
}
