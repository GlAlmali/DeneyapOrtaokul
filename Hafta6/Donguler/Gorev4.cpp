//Defne ��retmen ald��� 10 tane kitab� s�n�f�ndaki ��rencilere �ekili� yoluyla da��tmak istemektedir.
//S�n�ftaki ��rencilerin okul numaralar� 50 ile 100 aras�ndad�r (100 hari�).
//Defne ��retmen bunun i�in 50 ile 100 aras�nda 10 tane rastgele bir say� �reten program yazarak kitaplar� okul numaras� rastgele ��kan ��rencilere verecektir.
//Bunun i�in nas�l bir kod yazmal�d�r?
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    for(int i=0; i<10;i++)
        cout << 50 + rand() % 50 <<endl;
}
