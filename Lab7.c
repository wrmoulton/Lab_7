#include <stdio.h>
#include <string.h>
void swap(int *arr, int size) {
    int temp;
    int counter = 0;
    printf("%d\n\n",size);
    for (int i = 0; i < size ; i++) {
        for (int n = 0; n < size - i  ; n++) {
            if (arr[n] > arr[n+1]) { 
                temp = arr[n+1];
                arr[n+1] = arr[n];
                arr[n] = temp;
                counter++;
            }
        }
        printf("%d ", counter);
        counter = 0;
    }
    
}

int main(void) {
    int arr[9] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int size = sizeof(arr)/sizeof(int);
    swap(arr, size);
    printf("\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
