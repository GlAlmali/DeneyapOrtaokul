//Ahmet bilgisayara rastgele 2 sayý ürettirip, üretilen sayýdaki büyük olaný ekrana yazdýrmak istiyor.
//Ahmet'in nasýl bir kod yazmasý gerekmektedir?
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int sayi1, sayi2;
    srand(time(0));
    sayi1 = rand();
    sayi2 = rand();
    if(sayi1>sayi2)
        cout << sayi1;
    else
        cout << sayi2;
}
