#include<stdio.h>
int main(){
    // Structure 1 2 3 4 for choice then exceuting simultaneosly
    int userchoice = choice();
    printf("Entered Choice is %d",userchoice);
}

int choice(){
    printf("Please Type your choice\n");
    printf("\n Type 1 for Decimal to Binary Num \n Type 2 for Binary to Decimal Num \n Type 3 for Decimal to Hexdecimal \n Type 4 for Hexadecimal to Decimal ");
    int userchoice;
    scanf("%d",&userchoice);
    return userchoice;
}
