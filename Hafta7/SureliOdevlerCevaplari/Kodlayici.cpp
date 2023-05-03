//A�a��daki matris yap�s�nda voleybol oyuncular�n�n numaralar� verilmektedir.
//Ko�, oyuncular� iki ma� �ncesi a�a��daki gibi ayn� s�rada g�rmek istiyor.
//�ki ma�tada s�ralaman�n ayn� oldu�undan emin olmak i�in bir kod tasarlamay� d���n�yor,
//ancak yard�ma ihtiyac� var.
//Ko� i�in bu program� sen tasarlar m�s�n?
//Program i�erisinde tan�mlama b�l�m�nde oyuncular�n ilk dizilimi a�a��daki matristeki gibi olmal�d�r.
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
        cout << "S�ralama ayn�";
    else
        cout << "S�ralama farkl�";
    return 0;
}
