#include <stdio.h>

int main() {
    int numbers[5]; 
    int even = 0;  
    int odd = 0;   

    printf("Nhap 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) { 
            even++;
        } else { 
            odd++;
        }
    }
    printf("So luong so chan: %d\n", even);
    printf("So luong so le: %d\n", odd);
    
    return 0;
}

