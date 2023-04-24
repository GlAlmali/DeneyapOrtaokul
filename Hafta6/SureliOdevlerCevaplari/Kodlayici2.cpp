//Bir sýnýftaki öðrencilerin numarasý 5 ile 25 arasýnda deðiþmektedir.
//Sýnýfa giren matematik öðretmeni Sercan, 3 ile tam bölünebilen öðrenci numaralarýný bulduran bir program yazmak istediðini belirtmiþtir.
//Siz matematik öðretmeninize kodlarý nasýl yazarak yardýmcý olurdunuz?
#include <iostream>
using namespace std;
int main()
{
    for(int i=5;i<25;i++)
        if (i%3 == 0)
            cout << i <<endl;
}
