//Bir s�n�ftaki ��rencilerin numaras� 5 ile 25 aras�nda de�i�mektedir.
//S�n�fa giren matematik ��retmeni Sercan, 3 ile tam b�l�nebilen ��renci numaralar�n� bulduran bir program yazmak istedi�ini belirtmi�tir.
//Siz matematik ��retmeninize kodlar� nas�l yazarak yard�mc� olurdunuz?
#include <iostream>
using namespace std;
int main()
{
    for(int i=5;i<25;i++)
        if (i%3 == 0)
            cout << i <<endl;
}
