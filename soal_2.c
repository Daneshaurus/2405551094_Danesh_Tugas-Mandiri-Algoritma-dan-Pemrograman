// TUGAS PERMAINAN KATA
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char a[100];
    char b[100];
    fgets(a, sizeof(a), stdin); 
    fgets(b, sizeof(b), stdin);  
    
    // hapus newline dari sample input
    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';

    // cek panjangg kedua string
    if (strlen(a) != strlen(b)) {
        printf("BERBEDA\n");
    } 
    else {
        // memastikan apakah kedua string identik
        if (strcmp(a, b) == 0) {
            printf("IDENTIK\n");
        } else {
            printf("MIRIP\n");
        }
    }
    
    return 0;
}