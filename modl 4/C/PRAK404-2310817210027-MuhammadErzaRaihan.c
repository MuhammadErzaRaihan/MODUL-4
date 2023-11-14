#include <stdio.h>
#include <stdlib.h>

void menu(){
    printf("Pilih Program\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Exit\n");
}

void exit_message(){
    printf("Terimakasih, telah menggunakan kalkulator Muhammad Erza Raihan\n");
}

int main(){
    int operasi;
    float A, B, hasil;
    while(1){
        menu();
        printf("Masukkan Pilihan : ");
        scanf("%d", &operasi);
        if(operasi == 5){
            exit_message();
            break;
        }
        if(operasi > 5){
            printf("Input anda salah, silahkan coba lagi\n");
            continue;
        }
        printf("Masukkan bilangan pertama: ");
        scanf("%f", &A);
        printf("Masukkan bilangan kedua: ");
        scanf("%f", &B);

        if(operasi == 1){
            hasil = A + B;
            printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n", A, B, hasil);
        }else if(operasi == 2){
            hasil = A - B;
            printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n", A, B, hasil);
        }else if(operasi == 3){
            hasil = A * B;
            printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n", A, B, hasil);
        }else if(operasi == 4){
            hasil = A / B;
            printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n", A, B, hasil);
        }
    }
    return 0;
}