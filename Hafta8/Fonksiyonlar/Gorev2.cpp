//Dikd�rtgen �eklinde olan b�y�k bir arazi ��gensel b�lgelere ayr�lmak istenmektedir.
//Bunun i�inde araziye ne kadar ��gen s��abilece�ini bulmak isteyen bir yaz�l�mc�
//ihtiya� duydu�u anda �a��rabilece�i ��gen alan�n�n hesaplamas�na y�nelik bir
//fonksiyon yazmak istemektedir.
//Yaz�l�mc� bu ��gen alan bulma fonksiyonunu nas�l kodlamas� gerekmektedir?
#include <iostream>
using namespace std;
void ucgenalani(double taban, double yukseklik)
{
    double alan = (taban*yukseklik) / 2;
    cout << alan << endl;
}
int main()
{
    ucgenalani(2, 4);
}
