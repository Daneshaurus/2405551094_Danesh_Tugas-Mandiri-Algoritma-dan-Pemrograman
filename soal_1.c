// TUGAS MENGURUTKAN BILANGAN
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Function to perform bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // looping setiap elemen
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // tukar elemen jika ada di urutan yang salah
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n; 
    scanf("%d", &n);  
    int arr[n];  
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
   
    bubbleSort(arr, n);
   
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]); 
        printf("\n");
    }

    return 0;
}