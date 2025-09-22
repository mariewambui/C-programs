/*
Name:Mary Wambui
Reg  no.CT101/G/26514/25
Description:age,income
*/

#include <stdio.h>

int main() {
    int age, income;
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your annual income in shillings: ");
    scanf("%d", &income);
    
    if (age >= 21 && income >= 21000) {
        printf("Congratulations, you qualify for a loan.\n");
      } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }
    
    return 0;
}