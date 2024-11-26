#include <stdio.h>
#include <math.h>

int main() {
    double principal, interestRate, totalAmount;
    int months;

    
    printf("Nhap so tien ban dau (VND): ");
    scanf("%lf", &principal);
    
    printf("Nhap lai hang thang (%%): ");
    scanf("%lf", &interestRate);
    
    printf("Nhap so thang gui: ");
    scanf("%d", &months);

    interestRate /= 100;

    totalAmount = principal * pow(1 + interestRate, months);

    double interest = totalAmount - principal;

    
    printf("So tien lai: %.2lf VND\n", interest);
    printf("Tong tien nhan %d thang: %.2lf VND\n", months, totalAmount);

    return 0;
}

