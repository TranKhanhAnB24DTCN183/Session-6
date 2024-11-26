#include <stdio.h>

int main() {
    int n, count = 0, num = 2, i;
    
    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);

    printf("Cac so nguyen dau tien la:\n");

    while (count < n) {
        int isPrime = 1;  
        
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; 
                break;
            }
        }

        if (isPrime) {
            printf("%d ", num);
            count++;
        }

        num++;  
    }
        return 0;
}

