#include <stdio.h>
#include <math.h>

int main() {
    int i, sum, num1, num2, num3;

    
    for (i = 100; i <= 999; i++) {
        num1 = i / 100; 
        num2 = (i / 10) % 10; 
        num3 = i % 10; 

        sum = pow(num1, 3) + pow(num2, 3) + pow(num3, 3);

        if (sum == i) {
            printf("%d la so Armstrong\n",i);
        }
    }

    return 0;
}

