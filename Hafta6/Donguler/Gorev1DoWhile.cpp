//Merve adl� ��renci 1�den 20�ye kadar olan tek say�lar� bulan bir program yaz�p ekranda g�stermek istemektedir.
//Merve bunun i�in sizce nas�l bir kod yazmal�?
#include <iostream>
using namespace std;
int main()
{
    int i=1;
    do
    {
        if(i%2==1)
            cout << i << endl;
        i++;
    }while(i<20);
}
