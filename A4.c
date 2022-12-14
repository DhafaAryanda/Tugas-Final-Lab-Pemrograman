#include <stdio.h>
#include <string.h>

int main(){
    char kata[100], Rkata[100];
    int hasil;

    printf("Input Kata: ");
    scanf("%s", kata);
    strcpy(Rkata, kata);    //Menyalin data pada variable kata ke Rkata
    strrev(Rkata);          //Melakukan Reverse pada Rkata

hasil=strcmp(kata, Rkata);  //Menggunakan strcmp untuk mengecek apakan variabel sama atau tidak
if (hasil==0)
{
    printf("Benar, kata "), printf("%s merupakan palindrom", kata);
}
else
{
    printf("Salah, kata "), printf("%s bukan merupakan palindrom", kata);
}
return 0; 
}