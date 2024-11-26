#include <stdio.h>

int main() {
  
    char correctPassword[] = "12345";  
    char inputPassword[50];  
    int i = 0;

   
    printf("Nhap mat khau: ");
    scanf("%s", inputPassword);  

    while (correctPassword[i] != '\0' && inputPassword[i] != '\0') {
        if (correctPassword[i] != inputPassword[i]) {
            printf("Mat khau sai!\n");
            return 0;
        }
        i++;
    }

    if (correctPassword[i] == '\0' && inputPassword[i] == '\0') {
        printf("Mat khau dung!\n");  
    } else {
        printf("Mat khau sai!\n"); 
    }

    return 0;
}


