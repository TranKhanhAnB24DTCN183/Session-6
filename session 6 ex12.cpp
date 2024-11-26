#include <stdio.h>

int main() {
    int n, i;
    long long a = 0, b = 1, next;

 
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So nguyen n phai lon hon 0\n");
        return 0;
    }

    printf("Cac so Fibonacci dau tien la:\n");

    if (n >= 1) {
        printf("%lld ", a);
    }
    
    if (n >= 2) {
        printf("%lld ", b);
    }

    for (i = 3; i <= n; i++) {
        next = a + b;  
        printf("%lld ", next);  
        a = b;  
        b = next; 
    }

    printf("\n");
    return 0;
}

