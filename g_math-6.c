#include <stdio.h>

int main(){
    double celsius, farenheit;

    /*
    printf("Enter the temperature in celsius: ");
    scanf("%lf", &celsius);

    farenheit = 1.8 * celsius +32;

    printf("Temperature in farenheight is : %lf\n", farenheit);*/

    printf("Enter the farenheit: ");
    scanf("%lf", &farenheit);

    celsius = (1.8/farenheit) + 32;
    printf("Temperature Celsius: %lf\n", celsius);


    return 0;
}
