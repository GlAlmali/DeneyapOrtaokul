#include <iostream>
using namespace std;
int main()
{
    int sayi = 13;
    if(sayi % 2 == 0)
        cout << sayi /2;
    else
        cout << (sayi-1) /2;
}

//Yukarıdaki kodu bilgisayarına yazan bir programcı sizce ne programlamak istemiştir?
//Cevap: Verilen sayının yarısını bulmaya çalışmaktadır. Sayı tek olsa dahi orta noktası bulunmaktadır.
