//Merve adl� ��renci 1�den 20�ye kadar olan tek say�lar� bulan bir program yaz�p ekranda g�stermek istemektedir.
//Merve bunun i�in sizce nas�l bir kod yazmal�?
#include <iostream>
using namespace std;
int main()
{
    int i;
    for(i=1;i<20;i++)
        if(i%2==1)
            cout << i << endl;
}
