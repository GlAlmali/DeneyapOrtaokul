//Merve adlý öðrenci 1’den 20’ye kadar olan tek sayýlarý bulan bir program yazýp ekranda göstermek istemektedir.
//Merve bunun için sizce nasýl bir kod yazmalý?
#include <iostream>
using namespace std;
int main()
{
    int i;
    for(i=1;i<20;i++)
        if(i%2==1)
            cout << i << endl;
}
