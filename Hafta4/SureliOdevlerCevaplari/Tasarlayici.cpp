//Verilen kodda sabit olarak tanımlanan x değişkenine
//tanımlama satırının dışında değer atanmaya çalışılmaktadır.
//Daha önce belirtildiği gibi sabitler tanımlanırken ilk değerlerini alır
//ve daha sonra içerikleri değiştirilemez.
#include <iostream>
using namespace std;
int main()
{
    const int x;
    x = 10;
    cout << x <<;
    return 0;
}
