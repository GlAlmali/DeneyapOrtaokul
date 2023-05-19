#include <iostream>
#include <cstring>
using namespace std;
class Ceptelefonu
{
public:
    char model[30];
    float fiyat;
    bool aramaDurum;
    bool mesajDurum;

    void arama();
    void mesaj_gonder();

    Ceptelefonu(){
        aramaDurum = false;
        mesajDurum = false;
    }
    ~Ceptelefonu(){
        cout << "Nesne yok edildi." << endl;
    }
};
void Ceptelefonu::arama() {
    aramaDurum = true;
}

void Ceptelefonu::mesaj_gonder() {
    mesajDurum = true;
}
int main() {
    Ceptelefonu telefon;
    telefon.arama();
    telefon.mesaj_gonder();
    return 0;
}
