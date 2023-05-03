//Aþaðýdaki matris yapýsýnda voleybol oyuncularýnýn numaralarý verilmektedir.
//Koç, oyuncularý iki maç öncesi aþaðýdaki gibi ayný sýrada görmek istiyor.
//Ýki maçtada sýralamanýn ayný olduðundan emin olmak için bir kod tasarlamayý düþünüyor,
//ancak yardýma ihtiyacý var.
//Koç için bu programý sen tasarlar mýsýn?
//Program içerisinde tanýmlama bölümünde oyuncularýn ilk dizilimi aþaðýdaki matristeki gibi olmalýdýr.
#include <iostream>
using namespace std;
int main()
{
    int matris1[4][5] = { {1, 3, 5, 7, 9},
                        {11, 13, 15, 17, 19},
                        {2, 4, 6, 8, 10},
                        {12, 14, 16, 18, 20}};
    int matris2[4][5] = { {1, 3, 5, 7, 9},
                        {11, 13, 15, 17, 19},
                        {2, 4, 6, 8, 10},
                        {12, 14, 16, 18, 20}};
    bool durum = true;
    int i, j;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 5; j++)
            if (matris1[i][j] != matris2[i][j])
                durum = false;
    if (durum)
        cout << "Sýralama ayný";
    else
        cout << "Sýralama farklý";
    return 0;
}
