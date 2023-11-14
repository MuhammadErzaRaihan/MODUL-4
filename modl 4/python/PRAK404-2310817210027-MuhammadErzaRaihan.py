print('Pilih Program')
print('1. Penjumlahan')
print('2. Pengurangan')
print('3. Perkalian')
print('4. Pembagian')
print('5. Exit')

while True:
    op = input('Masukkan Pilihan :')

    if op == '5':
        print('Terimakasih, telah menggunakan kalkulator Muhammad Erza Raihan')
        break
    if op not in ['1','2','3','4','5']:
        print('Input anda salah, silahkan coba lagi')
        continue
    
         

    A = float(input('Masukkan bilangan pertama: '))
    B = float(input('Masukkan bilangan kedua: '))

    if op == '1':
        hasil = A + B
        print(f'Hasil Penjumlahan antara {A:.2f} dengan {B:.2f} adalah {hasil:.2f}')
    elif op == '2':
        hasil = A - B
        print(f'Hasil Pengurangan antara {A:.2f} dengan {B:.2f} adalah {hasil:.2f}')
    elif op == '3':
        hasil = A * B
        print(f'Hasil Perkalian antara {A:.2f} dengan {B:.2f} adalah {hasil:.2f}')
    elif op == '4':
          hasil = A / B
          print(f'Hasil Pembagian antara {A:.2f} dengan {B:.2f} adalah {hasil:.2f}')
   