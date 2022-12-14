#include <stdio.h>
#include <stdlib.h>

int main() {
//deklarasi variabel
    int angka[1000], i, j, temp=0, datamuncul, jumlah;
    float sum=0, ratarata;

//Looping untuk mendapatkan angka random kedalam array
    for (i = 0; i < 1000; i++)        
        angka[i] = rand() % 151;
printf("\nAngka random pada Array: \n");

//Mengurutkan angka dari kecil ke besar
   for(i=0; i<1000; i++) {
     for (j = i+1; j < 1000; j++) {  
       if (angka[i] > angka[j]) {
         temp = angka[i];
         angka[i] = angka[j];
         angka[j] = temp;     
       }
     }
   }

//Looping untuk mendapatkan jumlah data
for(i=0; i<1000; i++){              
  printf("\t->%d", angka[i]);
}
for (i = 1; i < 1000; ++i) {
  sum = sum + angka[i];
}
//Mencari nilai rata-rata
ratarata = sum / 1000;
printf("\nJumlah data adalah %.2f, dengan nilai rata-rata %.2f", sum, ratarata);

void modus(int angka[],int n) {
  //deklarasi variabel
  int a, b = 0, i, j, result;

  //mencari modus
  for ( i = 0; i < n; i++){
    a = 0;
    for ( j = 0; j < n; j++){
      if (angka[i] == angka[j]){
        a++;
      }
    }
    if (a > b){
      result = angka[i];
      b = a;
    }else if (a == b){
      if (angka[i] > result){
        b = a;
        result = angka[i];
      }
    }
  }
  printf("\nModus = %d dengan jumlah data =  %d\n", result, b);
}
int n=1000;
  modus(angka,n);   //Memanggil fungsi modus
}





