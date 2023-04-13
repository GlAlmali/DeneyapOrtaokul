//Ali kardeþi Buðra’nýn 1’den 30’a kadar 3’erli olarak sayý saymasýný istemektedir.
//Buradan hareketle kardeþinin doðru sayýp saymadýðýný kontrol etmesi için bilgisayarda
//1’den 30’a kadar küçükten büyüðe olacak þekilde 3’e bölünebilecek sayýlarý ekranda göstermek istiyor.
//Bunun için nasýl bir kod yazmalý?
#include <iostream>
using namespace std;
int main()
{
    for(int i=0; i < 30; i++)
    {
        if(i%3==0) cout << i <<endl;
    }
    return 0;
}
