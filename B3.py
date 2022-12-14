n = int(input("Masukkan jumlah data: "))
def pola(n):
    k = 2 * n - 2
    angka = 1

    #Looping penambahan angka 
    for i in range(n):
        ch = int(angka)
        angka += 1
    #Looping spasi sebelum angka 
        for j in range(k):
            print(end=" ")
        k = k - 1
    #Looping angka dan spasi setelah angka       
        for m in range(i + 1):
            print(ch, end=" ")
        print("")
#Memanggil fungsi pola
pola(n)
