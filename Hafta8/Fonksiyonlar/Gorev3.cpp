//Fonksiyona g�nderilen say� 5 ile tam b�l�n�yor ise ekrana �tam b�l�n�r.�
//aksi durumda kalan� yazd�ran fonksiyonu yazal�m.
#include <iostream>
using namespace std;
void bes_ile_bolme(int bolunen)
{
    if (bolunen % 5 == 0)
        cout << "Tam bolunur." << endl;
    else
        cout << bolunen % 5 << endl;
}
int main()
{
    bes_ile_bolme(11);
    bes_ile_bolme(15);
    bes_ile_bolme(12);
}
