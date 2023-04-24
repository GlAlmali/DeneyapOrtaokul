#include <iostream>
using namespace std;
int main ()
{
    int yaslar[2][3] = {{15, 14, 17},
                        {12, 16}};
    int k = 1;
    for(int i=0; i<2;i++)
    {
        for(int j=0; j<3; j++,k++)
        {
            cout << k << ". arkadasimin yasi: " << yaslar[i][j] << endl;
        }
    }
    return 0;
}
