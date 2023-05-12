#include <iostream>
#include <cstring>
using namespace std;

class Meyve
{
public:
    char cesit[30];
    char ad;
    int fiyat;
    void renk();
};
void Meyve::renk()
{
    fiyat = 10;
    cout << "Elma 10TL";
}
int main()
{
    Meyve meyvem;
    strcpy(meyvem.cesit,"Elma");
    meyvem.fiyat= 10;
    cout << "Meyvem: " << meyvem.cesit<< "Fiyat: "<< meyvem.fiyat<<endl;
    meyvem.renk();
    return 0;
}
