//Merve adlý öðrenci 1’den 20’ye kadar olan tek sayýlarý bulan bir program yazýp ekranda göstermek istemektedir.
//Merve bunun için sizce nasýl bir kod yazmalý?
#include <iostream>
using namespace std;
int main()
{
    int i=1;
    while(i<20)
    {
        if(i%2==1)
        cout << i << endl;
    i++;
    }
}
