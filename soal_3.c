// TUGAS CEK BILANGAN PRIMA
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int cekPrima(long long n) {
    if (n <= 1) return 0;  // bilangan <= 1 bukan prima
    if (n <= 3) return 1;  // 2 dan 3 adalah bilangan prima
    if (n % 2 == 0 || n % 3 == 0) return 0;  // kalo bilangan habis dibagi 2 atau 3, berarti bukan prima

    // cek jika n adalah bilangan prima dengan memeriksa faktor dari 5
    // skip setiap 6 angka karena semua bilangan prima lebih besar dari 3 memiliki bentuk 6k +- 1
    for (long long i = 5; i * i <= n; i += 6) {
    // memastikan apakah n dapat dibagi oleh i atau i + 2
    if (n % i == 0 || n % (i + 2) == 0) return 0;
}

    return 1;  // 1 artinya bilangan prima 
}

int main() {
    long long n; // memakai tipe data long karena batasannya sangat besar (10^14)
    scanf("%lld", &n); 

    if (cekPrima(n)) {
        printf("PRIMA");
    } else {
        printf("BUKAN");
    }

    return 0;
}