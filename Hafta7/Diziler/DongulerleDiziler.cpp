#include <iostream>
using namespace std;
int main ()
{
    int notlar[5];
    for (int i=0; i<5; i++)
    {
        cout << i+1 << ". ogrencinin notu: ";
        cin >> notlar[i];
    }
    return 0;
}
