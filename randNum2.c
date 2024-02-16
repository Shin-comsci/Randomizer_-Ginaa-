#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned long long seed;  

int middleSquareMethod() {
    unsigned long long square = seed * seed;
    unsigned long long result = (square / 1000) % 1000000;
    
    seed = result;  // Update seed untuk iterasi berikutnya
    
    return (result % 6) + 1;  // Menghasilkan angka antara 1 dan 6
}

int main() {
    seed = time(NULL); //angka acak yang berbeda setiap kali dijalankan karena waktu akan terus berubah
    
    printf("%d\n", middleSquareMethod());
    
    return 0;
}

