//Program dizideki en b�y�k eleman� ve bu eleman�n indis numaras�n� yazd�rmay� ama�lamaktad�r.
#include <iostream>
using namespace std;
int main()
{
    int sayilar[] = {19, 11, 21, 13, 15};
    int i, x, y, n = 5;
    cout << "Dizi: ";
    for(i=0; i < n; i++)
        cout << sayilar[i] << " ";
    x = sayilar[0];
    y = 0;
    for(i=1; i < n; i++)
    {
        if(x < sayilar[i])
        {
            x = sayilar[i];
            y = i;
        }
    }
    cout << x << " ve " << y;
    return 0;
}
