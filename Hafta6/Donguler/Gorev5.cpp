//Ahmet okul kütüphanesindeki raflara herkesin kolayca kitaplarý bulabilmesi için sayý etiketleri yapýþtýrmak istiyor.
//Kütüphanede 30 tane raf olduðu düþünülürse Ahmet’in 1 den 30’a kadar sayýlarý sýralayýp ekranda göstermesi gerekmektedir.
//Buradan hareketle Ahmet’in nasýl bir kod yazmasý gereklidir, bilgisayarýmýzda kodlayalým.
#include <iostream>
using namespace std;
int main()
{
    int sayi = 1;
    while(sayi<30)
    {
        cout << sayi <<endl;
        sayi ++;
    }
}
