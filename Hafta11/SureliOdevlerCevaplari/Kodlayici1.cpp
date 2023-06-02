//Kiþinin soyadýný büyük harfe çevirelim.
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char mesaj[] = "Ahmet Yilmaz";
    bool bosluk = false;
    for(int i=0; i<strlen(mesaj);i++)
    {
        if(bosluk) mesaj[i] = toupper(mesaj[i]);
            if(mesaj[i] == ' ')
                bosluk = true;
    }
    cout << mesaj ;
    return 0;
}
