#include <stdio.h>

int main() {
    int minutes;         
    int total_cost;      
    const int subscription_fee = 25000; 

    printf("Nhap so phut su dung trong thang: ");
    scanf("%d", &minutes);

    total_cost = subscription_fee;  

    if (minutes <= 50) {
        total_cost += minutes * 600;
    } else if (minutes <= 200) {
        total_cost += 50 * 600 + (minutes - 50) * 400;
    } else if (minutes <= 400) {
        total_cost += 50 * 600 + 150 * 400 + (minutes - 200) * 200;
    } else {
        total_cost += 50 * 600 + 150 * 400 + 200 * 200 + (minutes - 400) * 100;
    }

    printf("Tong tien dien thoai can tra: %d VND\n", total_cost);

    return 0;
}

