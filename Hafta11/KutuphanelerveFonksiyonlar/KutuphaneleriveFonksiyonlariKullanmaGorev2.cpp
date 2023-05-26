//Büyük küçük karışık hâlde yazılmış bir cümleyi her harfi büyük olacak şekilde yazdıralım.
//“BuGun Hava Cok GUZEl!” cümlesini “Bugun Hava Cok Guzel!” şekline getirelim.
#include <iostream>
#include <cstring>
using namespace std;
int main()
{ char mesaj[] = "BuGun Hava Cok GUZEl!";
for(int i=0; i<strlen(mesaj);i++)
{ if(i==0 || mesaj[i-1] ==' ') mesaj[i] = toupper(mesaj[i]);
else mesaj[i] = tolower(mesaj[i]);
} cout << mesaj;
return 0;
}
