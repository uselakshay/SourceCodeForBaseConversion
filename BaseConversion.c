#include <stdio.h>
int choice()
{
    printf("\n Please Type your choice\n");
    printf("\n Type 1 for Decimal to Binary \n Type 2 for Binary to Decimal \n Type 3 for Decimal to Hexdecimal \n Type 4 for Hexadecimal to Decimal \n ");
    int userchoice;
    scanf("%d", &userchoice);
    return userchoice;
}
int askBinary()
{
    int bin;
    printf("\n Type Binary Number :");
    scanf("%d", &bin);
    return bin;
}
int askDecimal()
{
    int dec;
    printf("\n Type Decimal Number :");
    scanf("%d", &dec);
    return dec;
}
int convertDecimaltoBinary(int dec)
{
    // dec number is 24 into 1010001
    if (dec == 0)
    {
        return 0;
    }
    else
    {
        return (dec % 2) + convertDecimaltoBinary(dec / 2);
    }
}
int convertBinaryToDecimal(int bin, int t, int c)
{
    // ok
    if (bin > 0)
    {
        t += (bin % 10) * c;
        return convertBinaryToDecimal(bin / 10, t, c * 2);
    }
    else
    {
        return t;
    }
}

int convertDecimalToHexaDecimal(int dec)
{
    
}

void executingFunction(int userchoice)
{
    int bin, dec;
    switch (userchoice)
    {
    case 1:
        dec = askDecimal();
        bin = convertDecimaltoBinary(dec);
        printf("Binary number is %d ", bin);
        break;
    case 2:
        bin = askBinary();
        dec = convertBinaryToDecimal(bin, 0, 1);
        printf("Decimal number is %d", dec);
        break;
    case 3:
        dec = askDecimal();
        convertDecimalToHexaDecimal(dec);
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
    executingFunction(userchoice);
    return 0;
}
