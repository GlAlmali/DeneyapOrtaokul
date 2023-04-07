//Verilen deðiþken tanýmlamalarýndan ve ilk deðer atamalarýndan
//hangileri uygun olmayan deðiþken tanýmý ve deðer atamasýdýr?
int __xyz5; //Doðru
int _xyz5; //Doðru
bool xyz = -1 //Yanlýþ - bool sadece 0 ve 1 deðerini alabilir
short xyz = 34452; //Yanlýþ -32768 +32767 arasý deðer alabilir.
int xyz = 5.2; //Yanlýþ int tamsayý deðiþken tipidir
int xyz = '*'; //Yanlýþ int tamsayý deðiþken tipidir
int xyz = 34452; //Yanlýþ -32768 +32767 arasý deðer alabilir.
char xyz = '\192'; //Doðru, char ifadeleri ' ' içine yazýlýr
float xyz = 12345.12345; //Doðru, float ondaliklý sayý veri tipi
