// YARI�MA PROBLEMI 3:
//Hazine adas�na ho�geldiniz.
//Macerac�lar, hazine sand���n�n anahtar�n� a�mak i�in 20 �ans topu numaras�ndan olu�an bir dizi ile kar��la��r.
//Bu dizideki numaralar rastgele da��lm�� rakamlardan olu�maktad�r.
//Macerac�lar, �ifreyi ��zmek i�in bu rakamlar�n kullan�m miktar�n� (say�s�n�) en azdan �o�a do�ru s�ralayan kodu yazar.
//��nk� kodun ��kt�s� hazine sand���n�n �ifresidir.
#include <iostream>
using namespace std;
int main()
{
    // Tanimlama Bolumu
    int dizi[20] ={3,1,4,6,3,9,5,0,6,9,2,8,2,9,5,8,6,8,9,2};
    int m=20;
    int tekrar[10]={0};
    // Tekrar Say�lar�n� Bulma
    for(int i=0;i<m;i++){
            for(int j=0; j<10; j++){
                if(dizi[i] == j){
                    tekrar[j]++;
                }
            }
    }
    /*
    //Tekrar Say�lar�n� Bulma Hizli Yol
    for(int i=0; i<m; i++){
    tekrar[dizi[i]]++;
    }
    */
    //Azdan �o�a Do�ru Rakamlari Yazdirma
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(tekrar[j]==i)
            cout << j;
        }
    }
    return 0;
}
