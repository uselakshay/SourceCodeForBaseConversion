#include <stdio.h>
int choice()
{
    printf("Please Type your choice\n");
    printf("\n Type 1 for Decimal to Binary Num \n Type 2 for Binary to Decimal Num \n Type 3 for Decimal to Hexdecimal \n Type 4 for Hexadecimal to Decimal ");
    int userchoice;
    scanf("%d", &userchoice);
    return userchoice;
}
int askBinary()
{
    int bin;
    printf("Type Binary Number");
    scanf("%d", &bin);
    return bin;
}
int askDecimal()
{
    int dec;
    printf("Type Decimal Number");
    scanf("%d", &dec);
    return dec;
}
int convertDecimaltoBinary(int dec)
{
    // dec number is 24 into 1010001
    if (dec == 0){
        return 0;
    }else{
        return (dec % 2)+convertDecimaltoBinary(dec/2);
    }
}
int executingFunction(int userchoice)
{
    int bin, dec;
    switch (userchoice)
    {
    case 1:
        dec = askDecimal();
        bin = convertDecimaltoBinary(dec);
        printf("Binary number is %d ",bin);
        break;
    default:
        printf("Error!");
    }
}

int main()
{
    // Structure 1 2 3 4 for choice then exceuting simultaneosly
    int userchoice = choice();
    printf("\n Entered Choice is %d", userchoice);
    return 0;
}
