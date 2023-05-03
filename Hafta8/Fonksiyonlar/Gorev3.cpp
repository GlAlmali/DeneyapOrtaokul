//Fonksiyona gönderilen sayý 5 ile tam bölünüyor ise ekrana “tam bölünür.”
//aksi durumda kalaný yazdýran fonksiyonu yazalým.
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
