// YARI�MA PROBLEMI 2:
//Ka��k adas�na ho�geldiniz.
//�kinci s�rada Bal�k�� adas� vard�r.
//Bal�k�� adas�n�n �ifresini kazanmak i�in macerac�lar�m�z ada yerlilerine XOX oyunu yazmak i�in yard�m etmelidir.
//XOX oyunu iki ki�i ile oynanan 3x3 bir tahta oyunudur.
//Bir ki�i tahtaya 'X' koydu�unda rakibi 'O' koymaktad�r.
//Oyunun amac� 3 adet �X� ve �O� harflerini yan yana, �st �ste veya �apraz olarak yerle�tirmektir.
//Macerac�lar XOX tahtas�n�n durumuna g�re bir oyunun bitip bitmedi�ini t�m olas� durumlar i�in kontrol eden program� yazarlar.
//Oyun bitmesi durumunda ekrana XOX bitmediyse, DEVAM yazd�r�lmas� gerekmektedir.
//Macerac�lar yazd�klar� bu programda a�a��daki XOX tahta durumunu test eder. Program ��kt�s� Bal�k�� adas�n�n �ifresidir.
#include <iostream>
#include <stdlib.h>
using namespace std; int main()
{
    char tahta[3][3];
    tahta[0][0] = 'X';
    tahta[1][0] = 'X';
    tahta[2][0] = '0';
    bool bitti = false;
    //Satir Kontrolü
    for(int i=0;i<3;i++)
    {
        if(tahta[i][0] == tahta[i][1] && tahta[i][1] == tahta[i][2] )
        {
            bitti = true;
        }
    }
    //Sütun Kontrolü
    for(int i=0;i<3;i++)
    {
        if(tahta[0][i] == tahta[1][i] && tahta[1][i] == tahta[2][i] )
        {
            bitti = true;
        }
    }
    //Sað Capraz Kontrolü
    if(tahta[0][0] == tahta[1][1] && tahta[1][1] == tahta[2][2] )
    {
         bitti = true;
    }
    //Sol �apraz Kontrolü
    if(tahta[0][2] == tahta[1][1] && tahta[1][1] == tahta[2][0] )
    {
        bitti = true;
    }
    if(bitti == true)
        cout <<"XOX";
    else
        cout <<"DEVAM";
}
