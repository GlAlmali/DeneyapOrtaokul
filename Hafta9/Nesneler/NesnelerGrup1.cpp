#include <iostream>
#include <cstring>
using namespace std;
class Araba
{
public:
    char
    marka[30];
    int fiyat;
    int hiz;
    void hizlanma();
};
void Araba::hizlanma(){
    hiz=hiz+10;
    cout<<"Arabam hizlandi"<<endl;
}
int main(){
    Araba arabam;
    strcpy(arabam.marka,"Toyota");
    arabam.fiyat=145000;
    cout<<"Benim arabam: "<<arabam.marka<<" Fiyat: "<<arabam.fiyat<<endl;
    arabam.hizlanma();
    return 0;
}
