// YARIÞMA PROBLEMI 2:
//Kaþýk adasýna hoþgeldiniz.
//Ýkinci sýrada Balýkçý adasý vardýr.
//Balýkçý adasýnýn þifresini kazanmak için maceracýlarýmýz ada yerlilerine XOX oyunu yazmak için yardým etmelidir.
//XOX oyunu iki kiþi ile oynanan 3x3 bir tahta oyunudur.
//Bir kiþi tahtaya 'X' koyduðunda rakibi 'O' koymaktadýr.
//Oyunun amacý 3 adet ‘X’ ve ‘O’ harflerini yan yana, üst üste veya çapraz olarak yerleþtirmektir.
//Maceracýlar XOX tahtasýnýn durumuna göre bir oyunun bitip bitmediðini tüm olasý durumlar için kontrol eden programý yazarlar.
//Oyun bitmesi durumunda ekrana XOX bitmediyse, DEVAM yazdýrýlmasý gerekmektedir.
//Maceracýlar yazdýklarý bu programda aþaðýdaki XOX tahta durumunu test eder. Program çýktýsý Balýkçý adasýnýn þifresidir.
#include <iostream>
#include <stdlib.h>
using namespace std; int main()
{
    char tahta[3][3];
    tahta[0][0] = 'X';
    tahta[1][0] = 'X';
    tahta[2][0] = '0';
    bool bitti = false;
    //Satir KontrolÃ¼
    for(int i=0;i<3;i++)
    {
        if(tahta[i][0] == tahta[i][1] && tahta[i][1] == tahta[i][2] )
        {
            bitti = true;
        }
    }
    //SÃ¼tun KontrolÃ¼
    for(int i=0;i<3;i++)
    {
        if(tahta[0][i] == tahta[1][i] && tahta[1][i] == tahta[2][i] )
        {
            bitti = true;
        }
    }
    //SaÃ° Capraz KontrolÃ¼
    if(tahta[0][0] == tahta[1][1] && tahta[1][1] == tahta[2][2] )
    {
         bitti = true;
    }
    //Sol Çapraz KontrolÃ¼
    if(tahta[0][2] == tahta[1][1] && tahta[1][1] == tahta[2][0] )
    {
        bitti = true;
    }
    if(bitti == true)
        cout <<"XOX";
    else
        cout <<"DEVAM";
}
