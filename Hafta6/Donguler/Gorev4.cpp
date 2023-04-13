//Defne öðretmen aldýðý 10 tane kitabý sýnýfýndaki öðrencilere çekiliþ yoluyla daðýtmak istemektedir.
//Sýnýftaki öðrencilerin okul numaralarý 50 ile 100 arasýndadýr (100 hariç).
//Defne öðretmen bunun için 50 ile 100 arasýnda 10 tane rastgele bir sayý üreten program yazarak kitaplarý okul numarasý rastgele çýkan öðrencilere verecektir.
//Bunun için nasýl bir kod yazmalýdýr?
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    for(int i=0; i<10;i++)
        cout << 50 + rand() % 50 <<endl;
}
