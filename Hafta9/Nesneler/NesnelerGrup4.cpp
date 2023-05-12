#include <iostream>
#include <cstring>
using namespace std;
class Hayvan
{
public:
    char tur[20];
    char ad[20];
    void hareket();
};
void Hayvan::hareket()
{
    cout<<"Hayvanlar hareket edebilir."<<endl;
}
int main()
{
    Hayvan h1;
    strcpy(h1.tur,"Kedi");
    strcpy(h1.ad,"Gece");
    cout<<"Hayvan turu: "<<h1.tur<<"Adi: "<<h1.ad<<endl;
    h1.hareket();
    return 0;
}
