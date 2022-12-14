#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {
//Memasukkan rumus ke fungsi
//Fungsi desimal ke biner
void desimalkebiner() { 
    int n, i=1, k, j;
    int biner[10];
//Jika inputan lebih dari 2^8 atau 256 maka akan mengulang 
while(n > 256){
    printf("\n\nMasukkan bilangan desimal\t:");
    scanf("%i", &n);
    if (n > 256) {
        printf("\nnilai melebihi 2^8, mohon untuk mengulang");
    }
}
    while(n>0) {
    biner[i]=n%2;
    n=n/2;
    i=i+1;
    k=i;
    }
    printf("\nBilangan biner : ");
    for(j=k-1;j>0;j--) {
        printf("%i",biner[j]);
    }
}

//Fungsi biner ke desimal
void binerkedesimal() {
    int desimal=0, biner, i=1, rem, num;
    printf("Masukkan bilangan biner\t: ");
    scanf("%i", &biner);
    
    num = biner;
    while (biner != 0)
    {
        rem = biner % 10;
        desimal = desimal + rem*i;
        biner = biner / 10;
        i = i*2;
    }
    printf("\nBilangan desimal : %i", desimal);
}

//Fungsi desimal ke oktal
void desimalkeoktal() {
    int n;

    printf("Masukkan bilangan desimal\t: ");
    scanf("%i", &n);
    printf("\nBilangan oktal : %o", n);
}

//Fungsi oktal ke desimal
void oktalkedesimal() {
    long int oktal, desimal=0;
    int i=0;

    printf("Masukkan bilangan oktal\t: ");
    scanf("%i", &oktal);
    while (oktal != 0)
    {
        desimal = desimal + (oktal % 10) * pow(8, i++);
        oktal = oktal / 10;
    }
    printf("Bilangan desimal : %i", desimal);    
}

//Memasukkan fungsi yang sudah dibuat ke menu pilihan
int menu_pilihan;
do{
    printf("\n\n===========================\n");
    printf("\tKonversi Bilangan\n");
    printf("\tMenu :\n");
    printf("\t1. Desimal ke Biner\n");
    printf("\t2. Biner ke Desimal\n");
    printf("\t3. Desimal ke Oktal\n");
    printf("\t4. Oktal ke Desimal\n");
    printf("Masukkan Pilihan : ");
    scanf("%i", &menu_pilihan);
    printf("-------------------------\n");

    switch (menu_pilihan)
    {
    case 1:
        desimalkebiner();
        break;
    case 2:
        binerkedesimal();
        break;
    case 3:
        desimalkeoktal();
        break;
    case 4:
        oktalkedesimal();
        break;
    
    default:
        menu_pilihan=0;
        printf("Menu yang anda pilih tidak tersedia!\n");
        printf("=== Program berakhir, Terima kasih ===");
        break;
    }
} while (menu_pilihan != 0);
}
