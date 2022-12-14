#include <stdio.h>
int main() {
    int n, i=3, hitung, c;

    printf("Masukkan nilai : ");
    scanf("%i", &n);

    if (n >= 1) {
        printf("Bilangan Prima : ");
        printf("2, ");
    }
    
    for (hitung = 2; hitung <= n;)      //Looping penambahan bilangan
    {
        for ( c = 2; c <= i - 1; c++) {
            if (i%c == 0)
            break;
        }
        if (c == i) {
            printf("%i, ", i);
            hitung++;
        }
        i++;
    }
return 0;

}