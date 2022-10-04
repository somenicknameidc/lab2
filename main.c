#include <stdio.h>

int main(void) {
    int x1, x2;

    printf("Enter first number in octal number system:"); //step #1
    scanf("%o", &x1);

    printf("Your number in decimal number system: %d\n", x1); //step #2

    printf("\nYour number in hexadecimal number system: %x\n", x1); //step #3
    printf("Shifted 2 bits to the right: %x\n", x1 >> 2);

    printf("\nYour number in hexadecimal number system: %x\n", x1); //step #4
    printf("Your number after bitwise negation: %x\n", ~x1);

    printf("\nEnter second number in hexadecimal number system:"); //step #5
    scanf("%x", &x2);
    printf("Result of bitwise 'or' between first and second number: %x\n", x2 | x1);

    return 0;
}
