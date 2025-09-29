/*
Name : Mary Wambui
Reg no : CT101/G/26514/25
Description: water_units_costs
*/

# include<stdio.h>
int main () {

    int units;
    float bill;
    
    printf("Enter units:");
    scanf("%d", &units);

    if(units<=30 ) {
        bill=units*20;
    }
    else if(units>30 && units<=60 ) {
        bill=units*25;
    }
    else {
        bill=units*30;
    }
    printf("The total bill is ksh%.2f",bill);

    return 0;
}