//Araba sýnýfýna bir fonksiyon ekleme ve nesne tanýmlama
#include <iostream>
#include <cstring>
using namespace std;
class Araba {
public:
    char marka[30];
    char model[30];
    int hiz;
    int hizlan(int x);
};
int Araba::hizlan(int x) {
    return hiz + x;
}
int main() {
    Araba araba1; // Araba nesnesini olusturun
    strcpy(araba1.marka, "Opel");
    strcpy(araba1.model, "Astra");
    araba1.hiz = 120;
    cout << "Araba: " << araba1.marka << " " << araba1.model << " \n";
    cout << "Yeni Hiz: " << araba1.hizlan(30); // Fonksiyonu parametre ile cagirin
}
