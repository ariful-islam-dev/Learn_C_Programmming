#include <stdio.h>
#include <string.h>
#include <math.h>

/*char binary[]= "10110";
int len = 5;
int decimal = 0;

int position = 4;
int indx;*/

int main(){

    char binary[65];
    int len, decimal, power, i;
    printf("Enter the binary number: ");
    scanf("%s", binary);

    decimal = 0;

    len = strlen(binary);
    power = len - 1;

    for(i = 0; i < len; i++){
        decimal += (binary[i]-'0')*pow(2, power);
        power--;
    }

    printf("Decimal value is %d\n", decimal);

    return 0;
}
/*
for(indx = 0; indx <len; indx++){
    decimal = decimal + pow(2, position);
    position--;
}*/

