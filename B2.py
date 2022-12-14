print("============= Kuis =============")
poin=0
#Poin bertambah jika pertanyaan benar dijawab
print("Soal:\n ")
#Soal nomor 1
print("1. Berapakah hasil dari 984 dibagi 3?")
kjawaban = 328
jawaban = int(input("\nInputkan Jawaban: "))
if(jawaban == kjawaban):
    poin = poin + 1/3
    print("Jawaban anda benar, poin bertambah")
else:
    print("Jawaban anda salah")

#Soal nomor 2
print("\n2. Berapakah jumlah sila pada Pancasila?")
kjawaban = 5
jawaban = int(input("\nInputkan Jawaban: "))
if(jawaban == kjawaban):
    poin = poin + 1/3
    print("Jawaban anda benar, poin bertambah")
else:
    print("Jawaban anda salah")

#Soal nomor 3
print("\n3. Percaya kepada kitab-kitab Allah SWT merupakan rukun iman ke?")
kjawaban = 3
jawaban = int(input("\nInputkan Jawaban: "))
if(jawaban == kjawaban):
    poin = poin + 1/3
    print("Jawaban anda benar, poin bertambah")
else:
    print("Jawaban anda salah")

poin = poin * 100
print("\nTotal poin anda: ", poin)
