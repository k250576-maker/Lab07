#include <stdio.h>

int main() {
    int arr[10];
    printf("Enter 10 integers (between -100 and 100):\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    int check[201] = {0}; 

    for(int i = 0; i < 10; i++) {
        int temp = arr[i];
        if(temp >= -100 && temp <= 100) {
            if(check[temp + 100] == 0) {
                check[temp + 100] = 1;
            } else {
                arr[i] = -1;
            }
        }
    }

    printf("Updated array:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
