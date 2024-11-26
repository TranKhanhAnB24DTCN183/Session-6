#include <stdio.h>

int main() {
    int num, i;
    int isPrime = 1; 

    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    }

    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            isPrime = 0; 
            break;
        }
    }

    if (isPrime) {
        printf("%d la so nguyen to\n", num);
    } else {
        printf("%d khong phai la so nguyen to\n", num);
    }

    return 0;
}

