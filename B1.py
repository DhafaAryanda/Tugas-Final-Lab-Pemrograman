#mengambil input dari user
kalimat = input("Input Kalimat: ")

#mengganti kata menggunakan replace
bahasa_g = kalimat.replace('a', 'aga').replace('i', 'igi').replace('u', 'ugu').replace('e', 'ege').replace('o', 'ogo')
print("Output Bahasa g: ", bahasa_g)