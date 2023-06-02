// YARIÞMA PROBLEMI 3:
//Hazine adasýna hoþgeldiniz.
//Maceracýlar, hazine sandýðýnýn anahtarýný açmak için 20 þans topu numarasýndan oluþan bir dizi ile karþýlaþýr.
//Bu dizideki numaralar rastgele daðýlmýþ rakamlardan oluþmaktadýr.
//Maceracýlar, þifreyi çözmek için bu rakamlarýn kullaným miktarýný (sayýsýný) en azdan çoða doðru sýralayan kodu yazar.
//Çünkü kodun çýktýsý hazine sandýðýnýn þifresidir.
#include <iostream>
using namespace std;
int main()
{
    // Tanimlama Bolumu
    int dizi[20] ={3,1,4,6,3,9,5,0,6,9,2,8,2,9,5,8,6,8,9,2};
    int m=20;
    int tekrar[10]={0};
    // Tekrar Sayýlarýný Bulma
    for(int i=0;i<m;i++){
            for(int j=0; j<10; j++){
                if(dizi[i] == j){
                    tekrar[j]++;
                }
            }
    }
    /*
    //Tekrar Sayýlarýný Bulma Hizli Yol
    for(int i=0; i<m; i++){
    tekrar[dizi[i]]++;
    }
    */
    //Azdan Çoða Doðru Rakamlari Yazdirma
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(tekrar[j]==i)
            cout << j;
        }
    }
    return 0;
}
