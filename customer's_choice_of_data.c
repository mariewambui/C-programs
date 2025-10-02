/*
Name; Mary Wambui Kamau
Reg no: CT101/G/26514/25
Description : choice_of_data
*/

#include<stdio.h>

int main() {
int choice;

// display menu
printf("Mobile data bundle purchase\n");
printf("1.100MB -KES 50\n");
printf("2. 500MB - KES 200\n");
printf("3.1GB -KES 350\n");
printf("4. 2GB- KES 600\n");

// Ask userschoice 
printf("Enter your choice (1-4)");
scanf("%d", &choice);

switch ( choice ) {

case 1:
printf("You selected 100MB. cost: KES 50\n");
break;

case 2:
printf("You selected 500MB. cost: KES 200\n");
break ;

case 3:
printf("You selected 1GB. cost: KES 350\n");
break ;

case 4:
printf("You selected 2GB. cost: KES 600\n");
break ;

default :
printf("invalid choice\n");
}
return 0 ;
}
